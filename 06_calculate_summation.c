#include <stdio.h>

int main()
{
    int t, n, last_number, first_number, sum, is_started = 0;

    scanf("%d", &t);

    while(t--) {
        scanf("%d", &n);

        last_number = n % 10;
        first_number = n % 10;
        n = n / 10;
        sum = last_number + first_number;
       
        printf("Sum = %d\n", sum);
    }

    return 0;
}