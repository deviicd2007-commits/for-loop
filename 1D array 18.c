#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n == 0) {
        printf("0");
        return 0;
    }

    int current_count = 1;
    int max_count = 1;

    for(i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
        }

        if(current_count > max_count) {
            max_count = current_count;
        }
    }

    printf("%d", max_count);

    return 0;
}