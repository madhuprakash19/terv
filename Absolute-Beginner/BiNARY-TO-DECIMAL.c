#include <stdio.h>

int main()
{
    int n, sum = 0, count = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        if ((n % 10) != 0)
        {
            sum = sum + count;
        }
        n = n / 10;
        count = count * 2;
    }
    printf("%d", sum);
    return 0;
}