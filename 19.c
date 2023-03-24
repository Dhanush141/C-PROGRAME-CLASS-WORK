#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {28, 12, 15, 122, 10, 33, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
    {
        printf("Element not found in array\n");
    }
    else
    {
        printf("Element found at position %d\n", result);
    }

    return 0;
}
output:
Element found at position 2