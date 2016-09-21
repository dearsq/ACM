/*************************************************************************
    > File Name: 258AddDigit.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月21日 星期三 11时10分28秒

	258 Add Digits
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime?

//1. 逐位相加直到小于 10 
//2. 
 ************************************************************************/

#include <stdio.h>
#include <assert.h>

int addDigits_While(int num){

	while(num >= 10)
	{
		num = (num/10) + num%10;
	}
	return num;
}
int addDigits(int num){
	return 1+(num-1)%9;
}

int main(){
	assert(addDigits(138) == 3);
    return 0;
}
