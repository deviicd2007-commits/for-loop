#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n - 1];

    
    printf("%d ", max_from_right);

    
    for(i = n - 2; i >= 0; i--) {
        if(arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d ", arr[i]);
        }
    }

    return 0;
}