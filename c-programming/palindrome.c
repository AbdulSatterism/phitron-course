#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(long long num) {
    if (num < 0) return false;

    if (num != 0 && num % 10 == 0) return false;

    long long reversed = 0;
    long long original = num;

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed == original;
}


int main(){

int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}




