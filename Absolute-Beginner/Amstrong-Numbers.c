#include <stdio.h>

int main()
{
    unsigned int n, n1, n2, ans = 0, sum = 1;
    int count = 0, temp;
    scanf("%u", &n1);
    n = n1;
    n2 = n;
    while (n1 > 0)
    {
        count++;
        n1 = n1 / 10;
    }
    // printf("%d",count);
    for (int i = 0; i < count; i++)
    {
        temp = n % 10;
        n = n / 10;
        sum = 1;
        for (int j = count; j > 0; j--)
        {
            sum = sum * temp;
            // printf("%u %d %d\n",sum,j,temp);
        }
        ans = ans + sum;
    }
    // printf("%u",ans);
    if (ans == n2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}