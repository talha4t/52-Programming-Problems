#include <stdio.h>

int main()
{
    int b_played, r1, r2, B, t;
    double  need_run_rate, current_run_rate;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &r1, &r2, &B);
        
        b_played = 300 - B;
        need_run_rate = ((1.0 * r1 - 1.0 * r2) + 1) / (1.0 * B / 6);

        current_run_rate = (1.0 * r2) / (1.0 * b_played / 6);

        printf("%.2lf %.2lf\n",current_run_rate, need_run_rate);

    }
}