#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0;
    int end = n - 1;
    int isSymmetric = 1;

    while(start < end) {
        if(arr[start] != arr[end]) {
            isSymmetric = 0;
            break;
        }
        start++;
        end--;
    }

    if(isSymmetric)
        printf("Yes");
    else
        printf("No");

    return 0;
}