#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key) {
        return mid;
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    }
    else {
        return binarySearch(arr, mid + 1, high, key);
    }
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1) {
        printf("Element is not present in the array\n");
    }
    else {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}