#include <stdio.h>


int removeElement(int* nums, int size, int value){
    int write = 0;

    for (int  i = 0; i < size; i++)
    {
        if (nums[i] != value)
        {
            nums[write]= nums[i];
            write++;
        }
        
    }

    return write;
    
}


int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int val;
    scanf("%d", &val);

    int newSize = removeElement(a,n,val);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
    
}