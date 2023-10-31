#include <stdio.h>
int intotwo(int * c,int * d){
*c*=2;
*d*=2;
printf("%d\n",*c);
printf("%d\n",*d);

}
int main() {
    int a,b;
    int *ptr=&a;
    int *ptr1=&b;
    printf("enter the value of a & b:");
    scanf("%d%d",&a,&b);
    printf("before;%d %d\n",*ptr,*ptr1);
    intotwo(ptr,ptr1);
    printf("after;%d %d\n",*ptr,*ptr1);
    return 0;
}
