#include <stdio.h>

int main() {
    int n, k, i;

    scanf("%d", &n);

    int arr[n];

   
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    
    for(int r = 0; r < k; r++) {
        int first = arr[0];

        for(i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }

   
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}