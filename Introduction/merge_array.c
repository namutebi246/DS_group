#include <stdio.h>


int main(){
    char xWildAnimals[50][50];
    char nDomesticAnimals[50][50];
    int numX, numY;
    int i, j;


    printf("Please enter the number of wild animals: \n");
    scanf("%d", &numX);
    getchar();


    for(i = 0; i < numX; i++){
        printf("Wild animal %d: \n", i + 1);
        fgets(xWildAnimals[i], 50, stdin);
    }

    printf("Please enter the number of domestic animals: \n");
    scanf("%d", &numY);
    getchar();

    for(j = 0; j < numY; j++){
        printf("Domestic animal %d: \n", j + 1);
        fgets(nDomesticAnimals[j], 50, stdin);
    }

        // Print N + X animals in a single list
         // Print all animals in a single list
    printf("\nList of all animals:\n");

    for(i = 0; i < numX; i++) {
        printf("%d. %s\n", i + 1, xWildAnimals[i]);
    }

    for(j = 0; j < numY; j++) {
        printf("%d. %s\n", numX + j + 1, nDomesticAnimals[j]);
    }

 return 0;
}
