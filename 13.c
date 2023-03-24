#include <stdio.h>

void sort(int *arr, int n);

int main() {
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Sorted array: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void sort(int *arr, int n) {
    int i, j, temp;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(*(arr+i) > *(arr+j)) {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}
output:
Enter number of elements in array: 5
Enter 5 numbers: 25 45 89 15 82
Sorted array: 15 25 45 82 89