/*Program to print all Armstrong numbers between 1 and 500*/
/*Author: Bilal, Date 11/08/2021*/
#include<stdio.h>

int main()
{
  int num, digit, num_edit;
  int sum = 0;
  for(num=1 ;num<=500; num++)
  {
    /*Extract the hundred's digit and add its cube to the sum of cubes of digits*/
    num_edit = num;
    digit = num_edit/100;
    sum += digit * digit * digit;

    /*Extract the ten's digit and add its cube to the sum*/
    num_edit%=100;
    digit = num_edit/10;
    sum += digit * digit * digit;

    /*Extract the one's digit and add it to the sum*/
    num_edit%=10;
    digit = num_edit;
    sum += digit * digit * digit;

    printf("num=%d, sum=%d\n",num,sum);

    sum = 0;
  }
  return 0;
}
