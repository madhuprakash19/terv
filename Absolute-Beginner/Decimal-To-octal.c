#include <stdio.h>

int main()
{
    int n, a[10], count = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        a[count++] = n % 8;
        n = n / 8;
    }
    count--;
    while (count >= 0)
    {
        printf("%d", a[count--]);
    }
    return 0;
}