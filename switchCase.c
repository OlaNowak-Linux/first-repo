#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Enter your choice of '1' for 'PS1', '2' for 'PS2', '3' for PS3" 
  " or '4' for 'PS4', to see the released date of each Playstation device:\n");
  scanf(" %d ", &n);
  switch (n)
  {
   case 1:
      printf("PS1 was released on 29th of September 1995 in EU\n");
      break;
   case 2:
      printf("PS2 was released on 24th of November 2000 in EU\n");
      break;
   case 3:
      printf("PS3 was released on 23rd of March 2007 in EU\n");
      break;
   case 4:
      printf("PS4 was released on 29th of November 2013 in EU\n");
      break;
   default:
      printf("You may enter only PS models\n");
      exit(0);
 }
 return 0;
}
