#include <stdio.h>

int main(){

    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks < 0 || marks > 100){
        printf("Invalid marks!!!");
    }
    else{
        switch (marks/10)
    {
    case 10:
    case 9:
      printf("You got A+\n");
        break;
    case 8:
      printf("You got A\n");
        break;
    case 7:
      printf("You got A-\n");
        break;
    case 6:
      printf("You got B+\n");
        break;
    case 5:
      printf("You got B-\n");
        break;
    case 4:
      printf("You got C\n");
        break;
    
    default:
    printf("Ops you are fail!!!\n");
        break;
    }

    };


    return 0;
}