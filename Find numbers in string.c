#include <stdio.h>

int main() {
    char str[1000];
    int len, i, max = -1, ans = 0, ind = 0;
    scanf("%[^\n]%*c", str);

    for (len = 0; str[len] != '\0'; len++);

    for (i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            ans = 0;
            while (str[i] >= '0' && str[i] <= '9') {
                ans = ans * 10 + (str[i] - '0');
                i++;
            }
            if (max < ans)
                max = ans;
        }
    }

    printf("%d", max);
    return 0;
}





//input
//This is alpha 5057 and 97
//output
//5057
