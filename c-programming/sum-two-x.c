#include <stdio.h>


int main(){

    int n;

    printf("enter array size : ");
    scanf("%d", &n);

    int a[n];

    int flag=0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d",&x);

    for (int i = 0; i < n-i; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( a[i]+ a[j] == x){
                flag=1;
            }
        }
        
    }
    
    if (flag==1){
        printf("yes");
    }else{
        printf("No");
    }


    return 0;
    
}