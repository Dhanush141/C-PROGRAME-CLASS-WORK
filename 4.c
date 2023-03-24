#include <stdio.h>

int largestElement(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n, arr[100];
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int largest = largestElement(arr, n);
    printf("The largest element in the array is: %d", largest);

    return 0;
}
output:
Input the number of elements to be stored in the array: 5
Input 5 elements in the array:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
The largest element in the array is: 5