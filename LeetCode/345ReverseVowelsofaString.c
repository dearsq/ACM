/*************************************************************************
    > File Name: 345ReverseVowelsofaString.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月08日 星期四 16时23分16秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowels(const char c)
{
	if(c == 'a' || c == 'e' || c == 'i' ||
	   c ==	'o' || c == 'u')
		return 1;
	else
		return 0;
}


char* reverseVowels(char* s)
{
	int LEN = strlen(s);
	char* str = s;
	int start = 0;
	int end = LEN - 1;
	while(start < end){
		if(isVowels(str[start]) && isVowels(str[end]))
		{
			str[start] ^= str[end];
			str[end] ^=str[start];
		}
		if(!isVowels(str[start]))
			start++;
		if(!isVowels(str[end]))
			end--;
	}
	return str;
}

int main()
{
	char* s = "abcdefg";
	char* str = reverseVowels(s);
	printf("%s\n",str);
    return 0;
}
