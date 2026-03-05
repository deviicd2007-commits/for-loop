#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];
    int total_sum = 0;

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total_sum += arr[i];
    }

    int left_sum = 0;

    for(i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum - arr[i];

        if(left_sum == right_sum) {
            printf("%d", i);
            return 0;
        }

        left_sum += arr[i];
    }

    printf("-1");

    return 0;
}