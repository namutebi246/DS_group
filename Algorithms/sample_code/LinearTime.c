#include <stdio.h>


void calcSum( int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("The sum is %d\n", sum);
}


int main(){
    int n;
    
    printf("Enter the size of the array:");
    scanf("%d", &n);

    if(n<=0){
        printf("Array is empty\n");
        return 0;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    calcSum(arr, n);


    return 0;
}