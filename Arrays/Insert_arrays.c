#include <stdio.h>
int main(){
    int n,pos,arr[100],i,num;
    printf("please enter the size of the array (Max 100)\n");
    scanf("%d",&n);
    printf("Please enter the elements of an array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position\n");
    scanf("%d",&pos);
    printf("Enter number to be inserted\n");
    scanf("%d",&num);
    for(i=n ;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=num;
    n++;
    printf("Array after inserting new element\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }






return 0;
}
