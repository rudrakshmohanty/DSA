#include <stdio.h>
#include <stdlib.h>

int* CountDigits(int n) {
    int count = 0;
    int count1 = 0;
    int num = n;
    while (n > 0) {
        int ld = n % 10;
        count1++;
        if (ld != 0 && num % ld == 0) {
            count++;
        }
        n = n / 10;
    }
    int *arr = (int*)malloc(2 * sizeof(int)); // Dynamically allocate memory
    arr[0] = count;
    arr[1] = count1;
    return arr;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int *arr = CountDigits(n);
    printf("Number of Digits: %d\n", arr[1]);
    printf("The number of digits of '%d' that evenly divide '%d' is: %d\n", n,n,arr[0]);
    free(arr);
    return 0;
}
