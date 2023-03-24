#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    int j;

    for(j = l; j <= r - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

int kthSmallest(int arr[], int l, int r, int k)
{
    if(k > 0 && k <= r - l + 1)
    {
        int pos = partition(arr, l, r);

        if(pos - l == k - 1)
        {
            return arr[pos];
        }
        else if(pos - l > k - 1)
        {
            return kthSmallest(arr, l, pos - 1, k);
        }
        else
        {
            return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
        }
    }

    return -1;
}

int main()
{
    int arr[] = { 3, 7, 1, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("The %dth smallest element in the array is %d\n", k, kthSmallest(arr, 0, n - 1, k));

    return 0;
}
output:
The 3th smallest element in the array is 5