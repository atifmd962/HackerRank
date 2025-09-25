#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the five-digit number
    scanf("%d", &n);

    // Calculate the sum of digits
    while (n != 0) {
        sum += n % 10;  // Extract the last digit and add to sum
        n /= 10;        // Remove the last digit
    }

    // Output the result
    printf("%d\n", sum);

    return 0;
}


