#include <stdio.h>

void timSoLonNhat(int arr[], int n) {
    if (n <= 0) {
        printf("Mang rong.\n");
        return;
    }
    int max = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    
    printf("So lon nhat: %d\n", max);
}
int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4};
    timSoLonNhat(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
