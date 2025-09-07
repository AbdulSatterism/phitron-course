#include<stdio.h>



int main(){

    int x = 10;

    int * prt = &x;

    printf("address of x is : %p \n", &x);


    printf("address of x is after pointer use : %p \n", prt);


    // print pointer value 

    printf(" pointer value : %d\n", *prt);

    return 0;
}