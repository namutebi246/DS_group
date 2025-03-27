#include <stdio.h>
int main() {
    int n1, n2, n3, i;
// Prompt the user to enter the size and elements of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }// Prompt the user to enter the size and elements of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }// Calculate the size of the merged array
    n3 = n1 + n2;
    int d[n3];

    // Merge the first array into the merged array
    for (i = 0; i < n1; i++) {
        d[i] = a[i];
    }

    // Merge the second array into the merged array
    for (i = 0; i < n2; i++) {
        d[n1 + i] = b[i];
    }

    // Print the merged array
    printf("Merged array:\n");
    for (i = 0; i < n3; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}