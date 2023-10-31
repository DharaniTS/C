#include <stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,c;
    printf("enter value of a &b:");
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("%d",c);
    getchar();
    return 0;

}
int gcd(int a,int b)
{
    int c;
    if(b<=a && a%b==0)
    return b;
    else
    {
        if(a<b)
        return gcd(b,a);
        else
         c=a%b;
            return gcd(b,c);
    }

}
