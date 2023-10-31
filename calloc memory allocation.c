#include<stdio.h>
#include<stdlib.h>;
int main()
{
int *p,i;
//p=(int*)malloc(6*sizeof(int));
p=(int*)calloc(6,sizeof(int));
for(i=0;i<6;i++)
{
   printf("%d\t %d\n",&p[i],sizeof(p[i]));
   }
}
