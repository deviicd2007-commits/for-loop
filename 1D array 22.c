#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int peak_count = 0;
    for(i = 1; i < n - 1; i++) {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peak_count++;
        }
    }
    printf("%d", peak_count);
    return 0;
}