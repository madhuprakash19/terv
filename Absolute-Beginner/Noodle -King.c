#include <stdio.h>

int powe(int a)
{
    int sum = 1;
    while (a > 0)
    {
        sum = sum * 2;
        a--;
    }
    return sum;
}

int main()
{
    char a[1000];
    int i, n = 0, sum = 0, count = 0, ans[20], k = 0;
    scanf("%s", a);
    while (a[n] != '\0')
    {
        n++;
    }
    i = n - 1;
    while (i >= 0)
    {
        if (count < 3)
        {
            if (a[i] == '1')
            {
                // printf("powe: %d\n",powe(count));
                sum = sum + powe(count);
                // printf("sum : %d\n",sum);
            }
            count++;
            i--;
        }
        else
        {
            ans[k++] = sum;
            count = 0;
            sum = 0;
        }
    }
    ans[k++] = sum;
    for (i = k - 1; i >= 0; i--)
    {
        printf("%d", ans[i]);
    }
}