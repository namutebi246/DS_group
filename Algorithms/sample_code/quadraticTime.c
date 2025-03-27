#include <stdio.h>

void findPairs(int arr[], int size){
    printf("The pairs are:\n");

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            printf("(%d, %d)\n", arr[i], arr[j]);
        }
    }
}

int main(){

    int n;


    printf("Enter the size of the array:");
    scanf("%d", &n);

   if (n<=1){
    printf("Not enough elements to form pairs.\n");
    return 0;
   }

int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    findPairs(arr, n);

    return 0;

}