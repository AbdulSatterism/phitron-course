// input 2D array and output

#include <stdio.h>

int main(){

    int a[5][3];

    //input

    for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // take input
            scanf("%d", &a[i][j]);
        }
        
    }

    // output
    for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // 
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}