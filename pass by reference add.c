//pass by reference
#include<stdio.h>
int sum(int*p,int *q)
{
    return *p + *q;
}
int main()
{
    int a=5,b=10;
    printf("%d",sum(&a,&b));
}
