#include <stdio.h>

int main() {
    int n, i;
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers in array: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &*(arr+i));
    }
    printf("Elements in array: ");
    for(i=0; i<n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    return 0;
}
output:
Enter total number of elements: 3
Enter 3 numbers in array: 5 3 7
Elements in array: 5 3 7