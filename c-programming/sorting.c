#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sorting the array in ascending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Swap the elements
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print the sorted array after the sorting is complete
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
