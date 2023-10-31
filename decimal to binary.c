# include <stdio.h>
void decimalToBinary(int deci)
{
    if(deci>1)
    {
       decimalToBinary(deci/2);
    }
    printf("%d",deci%2);
}
int main()
{

    int deci;
    printf("Enter decimal number");
    scanf("%d",&deci);
    printf("Binary");
    decimalToBinary(deci);
    return 0;
}
