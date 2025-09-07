#include<stdio.h>

void callRef(int *p){

    // printf("print p : %p\n", p);

    *p=100;

};

int main(){

int x ;

callRef(&x);

// printf("%p\n", &x);
printf("%d\n", x);
return 0;

}