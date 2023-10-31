#include<stdio.h>

int main() {
    int n, i;

    printf("Enter the value : ");
    scanf("%d", &n);

    i = 0;

start:
    if (n != i) {
        printf("Hi\n");
        i++;
        goto start;
    }

    return 0;
}


