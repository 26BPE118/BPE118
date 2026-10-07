#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp, choice;


    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nChoose sorting order:\n");
    printf("1. Ascending Order (Smallest to Largest)\n");
    printf("2. Descending Order (Largest to Smallest)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);


    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (choice == 1) {

                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else if (choice == 2) {

                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }


    if (choice == 1) {
        printf("\nArray in Ascending Order:\n");
    } else if (choice == 2) {
        printf("\nArray in Descending Order:\n");
    } else {
        printf("\nInvalid choice! Displaying default unsorted array:\n");
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
