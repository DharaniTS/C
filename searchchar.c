#include<stdio.h>
#include<string.h>
int main()
{
   int i,count=0;
   char str[10],a;
   scanf("%c %[^\n]s",&a,str);
   for(i=0;str[i]!='\0';i++)
   if(a==str[i])
   {
       count++;
       break;
   }
   if(count==1)
   printf("Present");
   else
   printf("Not present");
}
