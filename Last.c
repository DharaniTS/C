#include <stdio.h>
#include <string.h>

int Last(const char* str, char ch)
{
    int length = strlen(str);
    int position = -1;
    for (int i = 0; i < length; i++)
     {
        if (str[i] == ch)
         {
            position = i;
         }
    }

    return position;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Search character: ");
    scanf("%c", &ch);

    int position = Last(str, ch);

    if (position == -1)
     {
        printf("Character not found.\n");
    }
    else
    {
        printf("Position: %d\n", position);
    }

    return 0;
}
