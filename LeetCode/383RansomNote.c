/*************************************************************************
    > File Name: 383RansomNote.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月24日 星期六 15时36分20秒

	383. Ransom Note
Given  an  arbitrary  ransom  note  string  and  another  string  containing  letters from  all  the  magazines,  write  a  function  that  will  return  true  if  the  ransom   note  can  be  constructed  from  the  magazines ;  otherwise,  it  will  return  false.   

Each  letter  in  the  magazine  string  can  only  be  used  once  in  your  ransom  note.

提供一个任意的勒索信字符串，和另一个从杂志中取出来的字符串，
写一个函数，实现 如果勒索信字符串能够从杂志中的字符串实现 就返回 真;
不行 就 返回假。
每个杂志字符串中的字只能用一次。

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true


 ************************************************************************/

#include <stdio.h>
/*
char bit_map[26] = {
	'a','b','c','d','e','f','g',
	'h','i','j','k','l','m','n',
	'o','p','q',
	'r','s','t',
	'u','v','w','x','y','z'
};
*/
int count_Ransom[26] = {0};
int count_Magazine[26] = {0};

void count_Char(char* s,int* array){
	while(*s){
			array[*s - 'a'] += 1;
			s++;
	}
	return;
}

int canConstruct(char* ransomNote,char* magazine){
	int i = 0;	
	
	count_Char(ransomNote, count_Ransom);
	count_Char(magazine, count_Magazine);

	for(i = 0; i < 26; i++){
		printf("%d %d \n",count_Ransom[i],count_Magazine[0]);
		if(count_Ransom[i] > count_Magazine[i])
		{
			printf("error,i = %d. the %c in Ransom is much more than in Magazine\n",i, count_Ransom[i]);
			return 0;
		}
	}
	return 1;
}

int main(){

	char* s1 = "aa";
	char* s2 = "aab";
	int result = 2;
	result = canConstruct(s1,s2);
	if(result == 1)
		printf("Yes!\n");
	else 
		printf("No!\n");
    return 0;
}
