#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positive = 0, negative = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);

    return 0;
}