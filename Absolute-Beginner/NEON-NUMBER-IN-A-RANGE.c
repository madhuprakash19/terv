#include <stdio.h>

int main()
{
    int n1, n2, sum, temp, r;
    scanf("%d%d", &n1, &n2);
    while (n1 < n2)
    {
        r = 0;
        sum = n1 * n1;
        while (sum > 0)
        {
            temp = sum % 10;
            r = r + temp;
            sum = sum / 10;
        }
        if (r == n1)
            printf("%d ", n1);
        n1++;
    }
    return 0;
}