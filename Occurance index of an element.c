#include <stdio.h>
int FirstOccurrence(int arr[], int n, int x)
 {
    int low = 0, high = n - 1, result = -1;
    while (low <= high)
        {
        int mid = low + (high - low) / 2;
    if (arr[mid] == x)
        {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < x)
        {
            low = mid + 1;
        } else
         {
            high = mid - 1;
        }
    }
    return result;
}

int LastOccurrence(int arr[], int n, int x)
{
    int low = 0, high = n - 1, result = -1;
    while (low <= high)
        {
        int mid = low + (high - low) / 2;
    if (arr[mid] == x)
        {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < x)
        {
            low = mid + 1;
        } else
         {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   printf("Enter the element to find (x): ");
    scanf("%d", &x);
    int first = findFirstOccurrence(arr, n, x);
    int last = findLastOccurrence(arr, n, x);
    if (first == -1)
    {
        printf("%d ", x);
    } else
    {
        printf(" %d %d %d", x, first, last);
    }

    return 0;
}
