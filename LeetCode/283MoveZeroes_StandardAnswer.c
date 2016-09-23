/*************************************************************************
    > File Name: 283MoveZeroes.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月23日 星期五 08时41分46秒

	283. Move Zeroes
	Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
	For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
	
	Note:
	You must do this in-place without making a copy of the array.
	Minimize the total number of operations.'
 ************************************************************************/

#include <stdio.h>

void moveZeroes(int* nums,int numsSize){
	int index,current;
	int temp;

	for(index = 0, current = 0; current < numsSize; current++)
	{
		if(nums[current] != 0)
		{
			temp = nums[index];
			nums[index] = nums[current];
			nums[current] = temp;
			index++;
		}
	}
} 

int main(){
	int nums[] = {	0, 1, 0, 3, 12	};
	int numsSize = (sizeof(nums)/sizeof(nums[0]));

	int i = 0;

	moveZeroes(nums,numsSize);

	while(i < numsSize){
		printf("%d ",nums[i]);
		i++;
	}
    return 0;
}
