#include <stdio.h>

int main()
{
 int diff , borrow;
 printf("X  Y  Bin |  Diff  Borrow\n");
 for(int x = 0; x < 2; x++)
 {
  for(int y = 0;y < 2; y++)
  {
    for (int z = 0; z < 2; z++){
        diff = (x^y)^z;
        borrow = ~(x)&y | ~(x)&z | y&z;
        printf("%d  %d  %d   |  ",x,y,z);
        printf("%d      %d\n",diff,borrow);
    }
   
  }
 }
 return 0;
}



