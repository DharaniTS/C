#include <stdio.h>
void reverseK(int arr[], int n, int k)
 {
    for (int i = 0; i < n; i += k)
        {
        int left = i;
        int right = (i + k - 1 < n) ? i + k - 1 : n - 1;

        while (left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
int main()
{
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    reverseK(arr, n, k);
    printf("Output: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
