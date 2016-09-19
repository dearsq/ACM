/*************************************************************************
    > File Name: 344ReverseString.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月08日 星期四 15时10分05秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* reverseString(char* s){
	int	LEN		= strlen(s);
	char* str	= (char*)malloc(LEN);
	char* begin	= str;
	char* end	= &s[LEN-1];
	while(LEN-- != 0){
		*begin++ = *end--;
	}
	end = NULL;
	begin = NULL;
    return str;
}

int main(void){
	char* s = "Sore was I ere I saw Eros";
	printf("%s0\n",reverseString(s));
}
