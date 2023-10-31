#include <stdio.h>

int Peak(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
     {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return arr[mid];
        }
        else if (mid > 0 && arr[mid - 1] > arr[mid])
         {
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {5, 10, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = Peak(arr, n);

    if (peak != -1)
    {
        printf("Peak element: %d\n", peak);
    } else
    {
        printf("No peak element found\n");
    }

    return 0;
}
