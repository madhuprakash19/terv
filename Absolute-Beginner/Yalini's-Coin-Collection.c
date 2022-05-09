#include <stdio.h>

int coin(int num)
{
    int n = num;
    int count = 0, ans, divide = 1, check = 0;
    if (num < 10)
        return num;
    while (num > 9)
    {
        count++;
        num = num / 10;
    }
    ans = count * 9;
    for (int i = 0; i < count; i++)
    {
        divide = divide * 10;
    }
    int num1 = n / divide;
    ans = ans + num1;
    for (int i = 0; i < count + 1; i++)
    {
        check = (check * 10) + num1;
    }
    if (check > n)
    {
        ans = ans - 1;
    }
    return ans;
}

int main()
{
    int n, temp, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        ans = coin(temp);
        printf("%d", ans);
        if (i + 1 < n)
        {
            printf("\n");
        }
    }
    return 0;
}