#include <stdio.h>  

int main() {
    int numX, numY, i;  

    // Ask the user for the number of wild animals
    printf("Please enter the number of wild animals: \n");
    scanf("%d", &numX);
    getchar(); // Consume the newline character left in the input buffer
    char xWildAnimals[numX][50];

    // Get wild animal names
    for (i = 0; i < numX; i++) {
        printf("Wild animal %d: \n", i + 1);
        fgets(xWildAnimals[i], 50, stdin);
    }

    // Ask the user for the number of domestic animals
    printf("Please enter the number of domestic animals: \n");
    scanf("%d", &numY);
    getchar(); // Consume the newline character left in the input buffer
    char nDomesticAnimals[numY][50];

    // Get domestic animal names
    for (i = 0; i < numY; i++) {
        printf("Domestic animal %d: \n", i + 1);
        fgets(nDomesticAnimals[i], 50, stdin);
    }

    // Merge both arrays into one
    int totalAnimals = numX + numY;
    char mergedAnimals[totalAnimals][50];

    // Copy wild animals to merged array
    for (i = 0; i < numX; i++) {
        snprintf(mergedAnimals[i], 50, "%s", xWildAnimals[i]);
    }

    // Copy domestic animals to merged array
    for (i = 0; i < numY; i++) {
        snprintf(mergedAnimals[numX + i], 50, "%s", nDomesticAnimals[i]);
    }

    // Print merged array
    printf("\nList of all animals:\n");
    for (i = 0; i < totalAnimals; i++) {
        printf("%d. %s", i + 1, mergedAnimals[i]);
    }

    return 0; 
}
