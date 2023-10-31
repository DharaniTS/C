#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int Arr[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++)
        {
        scanf("%d", &Arr[i]);
        }

    int maxSum = 0;
    int currentSum = 0;
    int currentStart = 0;

    for (int i = 1; i < N; i++)
        {
        if (Arr[i] > Arr[i - 1])
        {
            currentSum += Arr[i];
        } else {
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            currentSum = Arr[i];
            currentStart = i;
        }
    }

    if (currentSum > maxSum)
    {
        maxSum = currentSum;
    }

    printf("Maximum sum of an increasing segment: %d\n", maxSum);

    return 0;
}
