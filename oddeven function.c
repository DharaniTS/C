#include<stdio.h>
int odd(int a)
{
if(a%2==0)
{
return 0;
}else
{
return 1;
}
}
int main()
{
int a;
printf("Enter the value");
scanf("%d",&a);
if(odd(a)==0)
{
printf("%d the even number\n",a);
}
else
{
printf("%d the odd number\n",a);
}
return 0;
}
