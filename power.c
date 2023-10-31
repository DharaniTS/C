#include<stdio.h>
int power(int a,int b)//formal parameter
{
 int res=1,count=0;
 for(count=0;count<b;count++)
 res=res*a;
 return res;
}
int main()
{
int a,b;//actual parameter
scanf("%d %d",&a,&b);
printf("%d",power(a,b));
}
