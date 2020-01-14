#include <stdio.h>
int main ()
{
  //initialization of counter variable i
  int sum = 0, i = 1;  
  //loop to be repeated 5 times
  while(i <= 5)
  {
     sum = sum+i;
     //increment of countervariable
     i++;  
  }
  printf("sum of first 5 natural numbers = %d\n",sum);
  return 0;
}  //end of program
