# include<stdio.h>
int main()
{
int i;
int n=5;
int a[n]={1,2,3,4,5};
a[n+1];
a[n]=6;
for(i=0;i<n+1;i++)
{
printf("%d",a[i]);
}
}
