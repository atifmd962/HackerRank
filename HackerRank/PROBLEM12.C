#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }
    
    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}







