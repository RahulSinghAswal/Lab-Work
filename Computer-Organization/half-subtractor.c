#include <stdio.h>

int main()
{
    
 int diff , borrow;
 printf("X   Y  |  Diff  Borrow\n");
 for(int x = 0; x < 2; x++)
 {
  for(int y = 0;y < 2; y++)
  {
   diff = x^y;
   borrow = ~(x)&y;
   printf("%d   %d  |     ",x,y);
   printf("%d   %d\n",diff,borrow);
  }
 }
 return 0;
}
