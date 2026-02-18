#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0, count = 0, i;
     scanf("%d", &n);
    temp = n;
    for (i = n; i > 0; i = i / 10) {
        count++;
    }
    for (i = n; i > 0; i = i / 10) {
        digit = i % 10;
        sum = sum + pow(digit, count);
    }
    if (sum == temp) {
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }

    return 0;
}
