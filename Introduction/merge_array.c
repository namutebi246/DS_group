#include <stdio.h>  

int main() {
    // Arrays to store wild and domestic animal names (50 names, each up to 49 characters + null terminator)
    char xWildAnimals[50][50];
    char nDomesticAnimals[50][50];

    int numX, numY;  // Variables to store the number of wild and domestic animals
    int i, j;        // Loop counters

    // Ask the user for the number of wild animals
    printf("Please enter the number of wild animals: \n");
    scanf("%d", &numX);
    getchar(); // Consume the newline character left in the input buffer

    // Loop to get wild animal names
    for (i = 0; i < numX; i++) {
        printf("Wild animal %d: \n", i + 1);
        fgets(xWildAnimals[i], 50, stdin); // Read the wild animal name (including spaces)
    }

    // Ask the user for the number of domestic animals
    printf("Please enter the number of domestic animals: \n");
    scanf("%d", &numY);
    getchar(); // Consume the newline character left in the input buffer

    // Loop to get domestic animal names
    for (j = 0; j < numY; j++) {
        printf("Domestic animal %d: \n", j + 1);
        fgets(nDomesticAnimals[j], 50, stdin); // Read the domestic animal name (including spaces)
    }

    // Print all animals in a single list
    printf("\nList of all animals:\n");

    // Print wild animals first
    for (i = 0; i < numX; i++) {
        printf("%d. %s", i + 1, xWildAnimals[i]); // Printing each wild animal with its index
    }

    // Print domestic animals, continuing numbering from wild animals
    for (j = 0; j < numY; j++) {
        printf("%d. %s", numX + j + 1, nDomesticAnimals[j]); // Printing each domestic animal with its index
    }

    return 0; 
}
