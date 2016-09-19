/*************************************************************************
    > File Name: 292NimGame.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月19日 星期一 10时32分15秒

	292. Nim Game
	You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.

	Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.

	For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
 
 ************************************************************************/

#include <stdio.h>

#define TEST_292

int canWinNim(int n) {

     if( n % 4 == 0)
         return 0;
     else
         return 1;
}


#ifdef TEST_292
int main(){
	
	int n = 100;
	if(canWinNim(n)){
		printf("Yes,can win!\n");
	}
	else
	{
		printf("No,can't win!\n");
	}
	
    return 0;
}
#else

#endif
