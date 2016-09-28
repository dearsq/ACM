/*************************************************************************
    > File Name: 171ExcelSheetColumnNumber.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月28日 星期三 09时04分14秒
 ************************************************************************/

#include <stdio.h>

int titleToNumber(char *s)
{
    char*  string = s;
    int sum = 0;
    while(*string)
    {
	sum *= 26;
	sum += *string - 'A' + 1;
	string++;
    }
    return sum;
}


int main(){
    char* s = "AABB";
    printf("%d\n",titleToNumber(s) );
    return 0;
}
