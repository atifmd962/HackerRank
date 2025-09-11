#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[10] = {0}; // Array to store frequency of digits

    // Input the string
    scanf("%s", s);

    // Iterate through the string
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++; // Increment the count for the respective digit
        }
    }

    // Print the frequencies
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}



