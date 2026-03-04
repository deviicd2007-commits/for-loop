#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n - 1];

    
    arr[n - 1] = -1;

    
    for(i = n - 2; i >= 0; i--) {
        int current = arr[i];
        arr[i] = max_from_right;

        if(current > max_from_right) {
            max_from_right = current;
        }
    }

    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}