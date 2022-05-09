#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1, sum = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }
    if (sum == n)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}