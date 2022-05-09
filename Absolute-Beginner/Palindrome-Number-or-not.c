#include <stdio.h>

int main()
{
    unsigned int n, n1, n2;
    int temp;

    scanf("%u", &n);
    n1 = n;
    while (n > 0)
    {
        temp = n % 10;
        n = n / 10;
        n2 = (n2 * 10) + temp;
    }
    if (n1 == n2)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}