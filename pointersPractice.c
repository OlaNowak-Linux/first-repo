#include <stdio.h>
int main()
{
   int num  = 10;
   int num2 = 20;
   int num3 = 30; 
   printf("Value of variable num is: %d", num);
   printf("\nSize of data type int is: %zu bytes", sizeof(int));
   //printf("\nSize of data type int is: %lu bytes", (unsigned long) sizeof(int));

   /* To print the address of a variable we use %p
    * format specifier and ampersand (&) sign just
    * before the variable name like &num.
    */
   printf("\nAddress of variable num  is: %p", &num);
   printf("\nAddress of variable num2 is: %p", &num2);
   printf("\nAddress of variable num3 is: %p", &num3);
   printf("\n");
   return 0;
}
