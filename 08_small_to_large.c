#include <stdio.h>

int main()
{
    int i, j, t, temp;

    scanf("%d", &t);

    int arr[t];

    for (i = 1; i <= t; i++)
    {
        
        for (i = 1; i <= t; i++)  
            scanf("%d", &arr[i]);
        
        for (i = 1; i <= t; i++)
        {
            for (j = 1; j <= t; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[i] = temp;
                } 
            }
        }

        for (i = 1; i <= t; i++) 
        {
           for (j = 1; j <= t; j++)
           {
            printf("Case %d: %d\n ",i,  arr[i]);
           }
        }
    }

     return 0;  
}