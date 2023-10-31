#include <stdio.h>
void findDistinctElements(int arr[], int n, int pairs)
 {
    int uniqueCount = 0;
    int pairCount = 0;

    for (int i = 0; i < n; i++)
        {
        int isPair = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isPair = 1;
                break;
            }
        }

        if (!isPair)
        {
            uniqueCount++;
        }
    }

    int uniqueElements[uniqueCount];
    uniqueCount = 0;
    for (int i = 0; i < n; i++)
        {
        int isPair = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
             {
                isPair = 1;
                break;
            }
        }

        if (!isPair)
            {
            uniqueElements[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    for (int i = 0; i < uniqueCount; i++)
        {
        if (i < uniqueCount - 1)
        {
            printf("%d ", uniqueElements[i]);
        } else {
            printf("%d\n", uniqueElements[i]);
        }
    }
}

int main() {
    int pairs;
    scanf("%d", &pairs);

    int totalElements = 2 * pairs;
    int arr[totalElements];

    for (int i = 0; i < totalElements; i++) {
        scanf("%d", &arr[i]);
    }

    findDistinctElements(arr, totalElements, pairs);

    return 0;
}
