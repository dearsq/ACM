/*************************************************************************
    > File Name: 136SigleNumber.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月21日 星期三 08时39分35秒

	136. Single Number
Given an array of integers, every element appears twice except for one. Find that single one
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


//1. 用异或实现
//	0^a = a;
//	a^a = a;
//	a^b^c = a^(b^c)
//2. assert

 ************************************************************************/

#include <stdio.h>
#include <assert.h>

int singleNumber(int* nums, int numsSize){
	int single = 0;
	int i = 0;

	for(i = 0; i < numsSize; i++){
		single ^= nums[i];
	}
	return single;
}

int main(){
	int array[] = {
		1,1,2,2,3,3,4
	};
	int result = 0;

//	result = singleNumber((int*)array,sizeof(array)/sizeof(int));
//	printf("%d\n",result);		//print 4
	assert(singleNumber(array,sizeof(array)/sizeof(int)) == 4);
    return 0;
}
