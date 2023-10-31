#include <stdio.h>
#include <stdlib.h>

void find(int arr[], int n)
{
    int xor1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        xor1 ^= arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }
    int set_bit = xor1 & ~(xor1 - 1);

    int x = 0, y = 0;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] & set_bit)
        {
            x ^= arr[i];
        }
        else
        {
            y ^= arr[i];
        }
    }


    for (int i = 1; i <= n; i++)
    {
        if (i & set_bit)
        {
            x ^= i;
        }
        else
        {
            y ^= i;
        }
    }


    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d %d\n", x, y);
            return;
        }
    }

    printf("%d %d\n", y, x);
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    find(arr, n);

    return 0;
}
