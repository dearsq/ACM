/*************************************************************************
    > File Name: 389FindtheDifference.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月21日 星期三 14时14分57秒

	389. Find the Difference
	Given two strings s and t which consist of only lowercase letters.
	String t is generated by random shuffling string s and then add one more letter at a random position.
	Find the letter that was added in t.

	Example:
		Input:
		s = "abcd"
		t =	"abcde"

		Output:
		e

Explanation:
'e' is the letter that was added.
 ************************************************************************/

#include <stdio.h>
#include <string.h>


int
Index (char x)
{

  return x - 'a';
}

char
findTheDifference (char *s, char *t)
{

  int bit_map_s[26] = { 0 };
  int bit_map_t[26] = { 0 };
  int len_s = strlen (s);
  for (int i = 0; i < len_s; i++)
    {

      bit_map_s[Index (s[i])]++;
      bit_map_t[Index (t[i])]++;
    }
  bit_map_t[Index (t[len_s])]++;

  char res;
  for (int i = 0; i < 26; i++)
    {

      if (bit_map_s[i] != bit_map_t[i])
	{

	  res = 'a' + i;
	  break;
	}
    }
  return res;
}

int
main (void)
{
  char *s = "abcde";
  char *t = "abcdef";
  char diff;
  diff = findTheDifference (s, t);
  printf ("%c \n", diff);
  return 0;
}
