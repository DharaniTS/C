#include <stdio.h>

int findPositive(int arr[], int n)
{
   for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] <= n && arr[i] != arr[arr[i] - 1])
        {
            int temp = arr[i];
            arr[i] = arr[arr[i] - 1];
            arr[temp - 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }
    }

int main()
{
    int t;
    printf("Enter testcase: ");
    scanf("%d", &t);
    while (t--)
    {
        int n;
        printf("Enter no of ele:");
        scanf("%d", &n);
        printf("Enter the array elements:");
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int result = findPositive(arr, n);
        printf("The missing positive integer is:");
        printf("%d\n", result);
    }
    return 0;
}
