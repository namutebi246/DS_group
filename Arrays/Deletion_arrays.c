#include <stdio.h>

// Function to display the array
void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete an element from the beginning
int deleteFromBeginning(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty, nothing to delete.\n");
        return size;
    }
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

// Function to delete an element from the end
int deleteFromEnd(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty, nothing to delete.\n");
        return size;
    }
    return size - 1;
}

// Function to delete an element from a specific position
int deleteFromPosition(int arr[], int size, int pos) {
    if (size <= 0) {
        printf("Array is empty, nothing to delete.\n");
        return size;
    }
    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return size;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int main() {
    int arr[100], originalArr[100], size, choice, position;
    int size1, size2, size3;

    // User input for array size
    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // User input for array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        originalArr[i] = arr[i];  // Store original array separately
    }

    while (1) {
        // Restore the array to its original state before each operation
        for (int i = 0; i < size; i++) {
            arr[i] = originalArr[i];
        }

        // Display menu
        printf("\nArray Operations:\n");
        printf("1. Delete from Beginning\n");
        printf("2. Delete from End\n");
        printf("3. Delete from a Specific Position\n");
        printf("4. Display Original Array\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Original array: ");
                displayArray(originalArr, size);
                size1 = deleteFromBeginning(arr, size);
                printf("Updated array after deleting from beginning: ");
                displayArray(arr, size1);
                break;

            case 2:
                printf("Original array: ");
                displayArray(originalArr, size);
                size2 = deleteFromEnd(arr, size);
                printf("Updated array after deleting from end: ");
                displayArray(arr, size2);
                break;

            case 3:
                printf("Enter position to delete (0-based index): ");
                scanf("%d", &position);
                printf("Original array: ");
                displayArray(originalArr, size);
                size3 = deleteFromPosition(arr, size, position);
                printf("Updated array after deleting from position %d: ", position);
                displayArray(arr, size3);
                break;

            case 4:
                printf("Original Array: ");
                displayArray(originalArr, size);
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
