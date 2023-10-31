#include <stdio.h>

void Duplicate(int arr[], int n)
 {
    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }

    for (int i = 0; i < n; i++)
     {
        if (arr[i] / n > 1)
         {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Duplicate(arr, n);

    return 0;
}
