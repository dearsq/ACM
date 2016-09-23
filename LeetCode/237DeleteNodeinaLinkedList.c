/*************************************************************************
    > File Name: 237DeleteNodeinaLinkedList.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月23日 星期五 18时41分15秒

	237. Delete Node in a Linkd List
	
	Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

	Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.
 ************************************************************************/
#ifndef __DEL_NODELIST
#define __DEL_NODELIST

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

void deleteNode(struct ListNode* node){
	assert(node->next != NULL);
	struct ListNode* pNext = node->next;
	node->val = pNext->val;
	node->next = pNext->next;
	free(pNext);
}

/*
int main(){
	
    return 0;
}
*/


#endif
