#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(i = 0; i < n; i++) {
        int isDuplicate = 0;

        
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}