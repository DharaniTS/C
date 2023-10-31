#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool CapitalUsage(char* word)
{
    int n = strlen(word);

    if (n == 1)
        {
        return true;
    }
    bool firstCharIsCapital = isupper(word[0]);
    for (int i = 1; i < n; i++)
        {
        if (firstCharIsCapital)
         {
            if (isupper(word[i]))
            {
                continue;
            } else
            {
                return false;
            }
        } else
        {
            if (islower(word[i]))
            {
                continue;
            } else
            {
                return false;
            }
        }
    }

    return true;
}

int main()
 {
    char word[101];

    printf("Enter a word: ");
    scanf("%s", word);

    if (CapitalUsage(word))
        {
        printf("Output: true\n");
    } else
    {
        printf("Output: false\n");
    }

    return 0;
}
