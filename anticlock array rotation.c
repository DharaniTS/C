#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    //int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array
    int temp = a[0];
    for (int i = 0; i < 5 - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[5 - 1] = temp;
    printf("Rotated array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
