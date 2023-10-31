#include <stdio.h>
void findCommonElements(int a[], int n, int b[], int m)
 {
    int count = 0;
    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
             {
                count++;
                break;
            }
        }
    }
    printf("The same elements are: ");
    printf("%d\n", count);
}

int main()
 {
    int n, m;
    printf("Enter size 1 & 2: ");
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    findCommonElements(a, n, b, m);
    return 0;
}
