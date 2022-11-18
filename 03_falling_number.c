#include <stdio.h>

int main()
{
    int i, j;
    
    for (i = 1000, j = 0; i >= 1; i--, j++) {
        if (j % 5 == 0) {
            printf("\n");
        }
        printf("%d\t", i);
    }  
    return 0;
}

