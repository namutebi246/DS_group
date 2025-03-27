#include <stdio.h>
int main(){
    // c code showing how tranversing an array
    int i = 0;
    // 2D array stores strings
    char names[5][10] = {"Aisha", "Omar", "Panny", "Jay", "Jane"};
    while(i<5){
        printf("%s\n", names[i]);
        i++;
    }




    return 0;
}