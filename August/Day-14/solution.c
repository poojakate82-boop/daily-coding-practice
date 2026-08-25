#include <stdio.h>

int main() {
    int n1, n2, i;
    int arr1[100], arr2[100], merge[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        merge[n1 + i] = arr2[i];
    }

    printf("Merged Array:\n");

    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}