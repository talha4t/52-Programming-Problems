#include <stdio.h>

int main()
{
    int t, n, i;
    scanf("%d", &t);

    int m  = 0;
    while(t--)
    {
        scanf("%d", &n);
        m = m + 1;
        printf("Case %d:", m);
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf(" %d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}