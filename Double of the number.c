#include <stdio.h>

int main()
{
    int num, doubleNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    doubleNum = num << 1;
    printf("The double of %d is %d\n", num, doubleNum);
    return 0;
}
