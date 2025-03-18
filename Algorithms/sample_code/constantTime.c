#include <stdio.h>

void firstElement(int arr[0]){
    printf("The first is %d\n", arr[0]);
}

int main() {
    int arr[1];

    printf("Enter the first element: ");
    scanf("%d", &arr[0]);

    firstElement(arr);

    return 0;
}