/*************************************************************************
    > File Name: 169MajorityElement.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月29日 星期四 09时31分45秒
 ************************************************************************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../dbg.h"
//#include "../Hashmap/Hashmap.h"

#define N 509
#define HASH_VAL(n) abs((n) % N) // Hash 算法实现

typedef struct Node {
    int val, count;
} Node;

typedef struct HASH {
    Node *np;
    int size, capacity;
} HASH;

//确保 HASH 的容量是够的？
static int ensureCapacity(HASH *hp) 
{
    int size, capacity;
    Node *np;

    size = hp->size;
    capacity = hp->capacity;
    if (size < capacity)
        return 0;
    //如果容量为 0 ，就扩容为 8 字节; 如果容量不为 0，就扩容为 2 倍
    if (capacity == 0)
        capacity = 8;
    else
        capacity <<= 1;

    np = (Node*)realloc(hp->np, capacity * sizeof(Node));
    if (np == NULL)
        return -1;
    
    hp->capacity = capacity;
    hp->np = np;
    return 0;
}

//释放 Hash 表
static void freeHashTab(HASH htab[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (htab[i].np)
            free(htab[i].np);    
}

int majorityElement(int arr[], int n) 
{
    HASH htab[N], *hb;
    int i, j, cur, hval, res;

    //分配长 N 的 Hash Table
    memset(htab, 0, N * sizeof(HASH));

    //循环当前数组
    for (i = 0; i < n; i++) {
        cur = arr[i];
        hval = HASH_VAL(cur);
        hb = &htab[hval];
        for (j = 0; j < hb->size; j++)
            if (hb->np[j].val == cur)
                break;
        if (j == hb->size) {
            if (ensureCapacity(hb) == -1)
                goto err;
            hb->np[j].val = cur;
            hb->np[j].count = 1;
            hb->size++; 
        } else {
            hb->np[j].count++;
        }
        if (hb->np[j].count > n / 2) {
            res = hb->np[j].val;
            freeHashTab(htab, N);
            return res;
        } 
    }
    
err:
    freeHashTab(htab, N);
    return -1;    
}

int main(){
 	int arr[10] = { 1,2,1,1,1,1,1,3,4,5};
 	int result = 0;
 	result = majorityElement(arr, sizeof(arr)/sizeof(int));
 	log_info("%d.\n",result);
    return 0;
}
