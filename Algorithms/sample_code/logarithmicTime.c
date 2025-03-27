#include <stdio.h>


int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;
    int mid;

    while(low <= high){
        mid = (low + high) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
}



int main(){
 
   int n, target;

   printf("Enter the size of the sorted array:");
   scanf("%d", &n);

    if(n==0){
         printf("Array is empty\n");
         return 0;
    }

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element:");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if(result   != -1){
        printf("Element found at index %d\n", result);
    }
    else{
        printf("Element not found\n");
    }

    return 0;

}