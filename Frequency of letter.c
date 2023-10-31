#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canMakeFrequencyEqual(char str[]) {
    int freq[26] = {0};
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        freq[str[i] - 'a']++;
    }

    int distinctCount = 0;
    int minFreq = n;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            distinctCount++;
            if (freq[i] < minFreq) {
                minFreq = freq[i];
            }
        }
    }
    if ((minFreq == 1 && distinctCount == 1) || (minFreq == n - 1 && distinctCount == 1) || (minFreq == n - distinctCount + 1)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    if (canMakeFrequencyEqual(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
