#include<stdio.h>
int main()
{
    int n,flag;

    scanf("%d",&n);
    if(n>0)
    {
    int rem=n%8;
    if(rem==0)
    {
       flag=2;
    }
    else if(rem<5)
    {
        flag=rem;
    }
    else
    {
        flag=10-abs(rem);//absolute number-abs
    }
    switch(flag)
    {
        case(1):
        printf("Thumb");
        break;
        case(2):
        printf("Index");
        break;
        case(3):
        printf("Middle");
        break;
        case(4):
        printf("Ring");
        break;
        case(5):
        printf("Little");
        break;
    }
    }
    else
    {
        printf("Invalid input");
    }
}
