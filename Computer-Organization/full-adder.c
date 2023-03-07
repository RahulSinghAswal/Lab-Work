#include <stdio.h>

int main()
{
 int sum , carry;
 printf("X  Y  Z   |  Sum  Carry\n");
 for(int x = 0; x < 2; x++)
 {
  for(int y = 0;y < 2; y++)
  {
    for (int z = 0; z < 2; z++){
        carry = (x^y)&z | x&y;
        sum = x^y^z;
        printf("%d  %d  %d   |  ",x,y,z);
        printf("%d   %d\n",sum,carry);

    }
   
  }
 }
 return 0;
}