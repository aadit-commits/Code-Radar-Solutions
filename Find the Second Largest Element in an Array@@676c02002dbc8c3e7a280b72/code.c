#include <stdio.h>
#include <limits.h>

int sl(int arr[], int n) {
    if (n < 2) {
        return -1;
    }

    int max = INT_MIN, smax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            smax = max; // update second largest before max
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    if (smax == INT_MIN) {
        return -1; // No second largest element
    }

    return smax;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sl(arr, n);
    printf("%d", result);
    return 0;
}


