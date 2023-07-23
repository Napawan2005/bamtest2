#include <stdio.h>

int main() {
    int x, y, z, sum;
    printf("ENTER NUMBER (X): ");
    scanf("%d", &x);
    printf("ENTER NUMBER (Y): ");
    scanf("%d", &y);
    printf("ENTER NUMBER (Z): ");
    scanf("%d", &z);

    if (z == 1) {
        sum = x + y;
    } else if (z == 2) {
        sum = x - y;
    } else if (z == 3) {
        sum = x * y;
    } else if (z == 4) {
        if (y != 0 && x != 0) {
            sum = x / y;
        } else {
            printf("ERROR: Division by zero is not allowed.\n");
            return 1; // Return non-zero to indicate an error
        }
    } else {
        printf("ERROR: Invalid operator code.\n");
        return 1; // Return non-zero to indicate an error
    }

    printf("RESULT: %d\n", sum);
    return 0;
}
