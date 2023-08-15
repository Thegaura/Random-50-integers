#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, max = -1;
    int nums[50];
    for (i = 0; i < 50; i++) {
        nums[i] = rand() % 1000 + 1;
        int n = nums[i];
        int binary[32];
        int k = 0;
        while (n > 0) {
            binary[k] = n % 2;
            n /= 2;
            k++;
        }
        int base = 2;
        for (j = k - 1; j >= 0; j--) {
            if (binary[j] > base) {
                base = binary[j];
            }
        }
        if (base > max) {
            max = base;
        }
    }
    printf("The highest base of random 50 integers is %d\n", max);
    return 0;
}