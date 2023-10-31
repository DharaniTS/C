#include <stdio.h>
#include <string.h>

int main()
{
    char data[1000];
    char coder;
    int count = 0;


    fgets(data, sizeof(data), stdin);
    scanf("%c", &coder);


    for (int i = 0; i < strlen(data); i++)
    {
        if (data[i] == coder)
        {
            count++;
        }
    }


    printf("%d\n", count);

    return 0;
}
