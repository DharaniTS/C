#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    ((n&(n-1))==0)?printf("yes"):printf("No");
}
//power of two or not
//FOR FOUR SQUARE   ->(n&(n-3))==0)
