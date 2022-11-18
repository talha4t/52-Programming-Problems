#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, len;
    char str[100];

    scanf("%d", &t);

    while(t--) {
        scanf(" %[^\n]", str);

        len = strlen(str);

        printf("%s", str);
    }

    return 0;
}