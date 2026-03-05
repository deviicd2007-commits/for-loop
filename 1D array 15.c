#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos = 0;

    
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    
    while(pos < n) {
        arr[pos] = 0;
        pos++;
    }

   
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}