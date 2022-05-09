#include <stdio.h>

int logtwo(long long int num)
{
    int count = 0;
    while (num > 1)
    {
        num = num / 2;
        count++;
    }
    return count;
}

long long int squareN(int power)
{
    long long int a = 1;
    while (power > -1)
    {
        a = a * 2;
        power--;
    }
    return (a - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int temp, sum, ans, power;
        scanf("%lld", &temp);
        sum = (temp * (temp + 1)) / 2;
        int count = logtwo(temp);
        power = squareN(count);
        ans = sum - (2 * power);
        printf("%lld\n", ans);
    }
    return 0;
}