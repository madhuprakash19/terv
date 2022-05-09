#include <stdio.h>

int power(int n, int i)
{
    int ans = 1;
    while (i > 0)
    {
        ans = ans * n;
        i--;
    }
    return ans;
}

int main()
{
    int i = 1, sum = 0, a, b = 0, a1;
    scanf("%d", &a);
    a1 = a;
    while (a > 0)
    {
        int temp = a % 10;
        b = b * 10 + temp;
        a = a / 10;
    }
    while (b > 0)
    {
        int temp = b % 10;
        sum = sum + power(temp, i);
        b = b / 10;
        i++;
    }
    if (a1 == sum)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}