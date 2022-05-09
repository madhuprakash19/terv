#include <stdio.h>
int main()
{
    int n, i, j, count1 = 1, count2 = 1, k;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            for (k = count2; k > 0; k--)
            {
                printf("%d", count1);
            }
            printf("\n");
        }
        count2 += 2;
        count1 += 1;
    }
    return 0;
}