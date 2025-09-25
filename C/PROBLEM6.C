#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

// Array to store English words for numbers 1 to 9
char *words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

if (n >= 1 && n <= 9) {
printf("%s\n", words[n]); // Print corresponding word
} else {
printf("Greater than 9\n"); // Print for numbers > 9
}

return 0;
}

