#include <stdio.h>

int prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return -1;
        }
    }
    return 1;
}

int main()
{
    int n, n1, n2 = 0, temp, ans1, ans2;
    scanf("%d", &n);
    n1 = n;
    if (n < 10)
    {
        int ans1 = prime(n);
        if (ans1 == 1)
        {
            printf("Twisted Prime Number");
        }
        else
        {
            printf("Not Twisted Prime Number");
        }
    }
    else
    {
        while (n > 0)
        {
            temp = n % 10;
            n2 = n2 * 10 + temp;
            n = n / 10;
        }

        ans1 = prime(n1);
        ans2 = prime(n2);
        if ((ans1 == ans2) && (ans1 != -1))
        {
            printf("Twisted Prime Number");
        }
        else
        {
            printf("Not Twisted Prime Number");
        }
    }
    return 0;
}