#include <stdio.h>

int main()
{
    int n, i = 2, temp = 0;
    scanf("%d", &n);
    while (n > 1)
    {
        if (n % i == 0)
        {
            if (temp < i)
                temp = i;
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    printf("%d", temp);
    return 0;
}