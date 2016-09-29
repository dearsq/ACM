/*************************************************************************
    > File Name: 371SumofTwoIntegers.c
    > Author: Younix
    > Mail: foreveryounix@gmail.com 
    > Created Time: 2016年09月19日 星期一 08时52分52秒

	371. Sum of Two Integers
	Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
	Example:
	Given a = 1 and b = 2, return 3.
 ************************************************************************/

#include <stdio.h>
#include "../dbg.h"


int
main ()
{
  int getSum (int a, int b)
  {
    int Carry = 0;

    int a_fun = a;

    int b_fun = b;

    while (b_fun)
      {
		Carry = (a_fun & b_fun) << 1;

		a_fun = a_fun ^ b_fun;

		b_fun = Carry;
      }

    return a_fun ;

  }
  log_info("%d",getSum(4,5));
}
