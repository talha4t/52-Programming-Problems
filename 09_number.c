#include <stdio.h>
#include <math.h>

int main()
{
    int n, root, t;

    scanf("%d", t);

    while(t--) {
        scanf("%d", &n);
        root = sqrt(n);

        if (root * root == n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}