#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    scanf("%d", &a);  
    int max_num = a;   

    for (int i = 1; i < n; i++) {  
        scanf("%d", &a);
        if (a > max_num) {
            max_num = a;
        }
    }

    printf("max value is: %d\n", max_num);
    return 0;
}
