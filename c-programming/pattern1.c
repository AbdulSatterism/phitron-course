// pattern formate will be like
/*
*
**
***
****

*/

#include <stdio.h>

int main(){

    int n, k=1;

    printf("Enter your first row: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        for (int  j = 0; j <=k; j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
        
    };


    return 0;
    

}


