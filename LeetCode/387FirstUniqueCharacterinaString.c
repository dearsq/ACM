/*

Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.
Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
*/

#include <stdio.h>

int firstUniqChar(char* s)
{
	int s_count[26] = {0};
	char* temp = s;
	//第一遍循环，统计每个字符的个数
	while(*temp)
	{
		s_count[*temp - 'a']++;
		temp++;
	}
	
	int i = 0;
	temp = s;
	//第二遍,找出现次数为 1 字符并返回下标 i
	while(*temp)
	{
		if(s_count[*temp - 'a'] == 1)
		{
			return i;
		}
		temp++;
		i++;
	}
	return -1;
}

int main(void)
{
	char* s = "dod";
	printf("%d\n",firstUniqChar(s));

	return 0 ;
}