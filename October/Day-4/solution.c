#include <stdio.h>

int main() {
    int arr[100];
    int visited[100] = {0};
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of each element:\n");

    for (i = 0; i < n; i++) {

        if (visited[i] == 1) {
            continue;
        }

        count = 1;

        for (j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d\n", arr[i], count);
    }

    return 0;
}