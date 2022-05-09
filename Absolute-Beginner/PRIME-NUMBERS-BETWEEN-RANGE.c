#include <stdio.h>

int prime(int n)
{
    if (n < 2)
        return -1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return -1;
    }
    return 1;
}

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    for (int i = n1; i < n2; i++)
    {
        int check = prime(i);
        if (check == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}