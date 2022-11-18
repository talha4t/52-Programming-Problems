#include <stdio.h>

int main()
{
    int n, t, fact = 1;

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);
        
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }

        printf("%d", fact);
    }

    return 0;
}