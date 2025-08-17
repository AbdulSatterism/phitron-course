

// #include <stdio.h>

// int main() {
//     char ch, next;

//     printf("Enter a character: ");
//     scanf(" %c", &ch);   // note the space before %c to ignore whitespace

//     if (ch >= 'A' && ch <= 'Z') {
//         // Uppercase case
//         next = 'A' + ( (ch - 'A' + 1) % 26 );
//     }
//     else if (ch >= 'a' && ch <= 'z') {
//         // Lowercase case
//         next = 'a' + ( (ch - 'a' + 1) % 26 );
//     }
//     else {
//         printf("Not an alphabet!\n");
//         return 0;
//     }

//     printf("Next alphabet: %c\n", next);

//     return 0;
// }

#include <stdio.h>

int main()
{

    char ch, next;

    printf("Enter a alphabate : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'A')
    {
        if (ch == 'Z')
        {
            next = 'A';
        }
        else
        {
            next = ch + 1;
        }
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'z')
        {
            next = 'a';
        }
        else
        {
            next = ch + 1;
        }
    }
    else{
        printf("not alphabate");
    }

    printf("%c", next);

    return 0;
}
