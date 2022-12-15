#include <stdio.h>
#include <string.h>
int main()
{
    int i, T;

    char n[100];
    scanf("%d", &T);

    while(T--) {
        scanf("%s", &n);
        
        int len = strlen(n);

        if (n[len - 1] % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}