#include <stdio.h>

int main() {
    int values[10];


    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }


    printf("\n--- Results ---\n");
    printf("The 4th value is: %d\n", values[3]);
    printf("The 7th value is: %d\n", values[6]);
    printf("The 9th value is: %d\n", values[8]);

    return 0;
}
