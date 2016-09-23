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

	//代码写的太冗杂了，不好
	//
	//主要思路是：
	//从 1 ——> numsSize 遍历数组元素
	//如果元素为 0 就去找后面最近的不为 0 的数，并进行交换
	//如果元素不为 0 就继续往后去找 0 
	//所有元素替换完了就结束
 ************************************************************************/

#include <stdio.h>

int findNoZeroes(int* nums,int numsSize, int position){
	int i = position+1;
	for(;i < numsSize;i++)
	{
		if(*(nums+i) != 0)
		{
			return i;
		}
	}
	return 0;
}

void moveZeroes(int* nums,int numsSize){
	int *pZero = NULL;
	int *pNoZero = NULL;
	int i = 0;
	int temp = 0;

	pZero =  nums;
	for(int i = 0; i < numsSize; i++)
	{
		if(*pZero == 0)
		{
			temp = findNoZeroes(nums,numsSize,i);
			if(temp == 0 )
			{
				i = numsSize;
				return ;
			}
			*pZero = *(nums + temp);
			*(nums + temp) = 0;
		}
		pZero++;
	}
	return ;
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
