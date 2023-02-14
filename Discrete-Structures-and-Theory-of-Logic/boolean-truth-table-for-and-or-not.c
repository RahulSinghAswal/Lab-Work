#include <stdio.h>

int main()
{
    int x;

    // Truth table for AND
    printf("Truth table for AND\n");
    printf("A   B   |   X\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            x = i & j;  
            printf("%d   %d   |   %d\n",i, j,x);          
        }
    }


    // Truth table for OR
    printf("Truth table for OR\n");
    printf("A   B   |   X\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            x = i | j;  
            printf("%d   %d   |   %d\n", i, j, x);          
        }
    }

    //Truth table for NOT
    printf("Truth table for NOT\n");
    printf("A   |   X\n");
    for (int i = 0; i < 2; i++){
        x = !i;  
            printf("%d   |   %d\n",i, x);          
    
    }

    return 0;

}
