#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        // printf("%d ",n);
        if (n % 2 != 0)
        {
            // printf("hello");
            count++;
        }
        n = n / 2;
    }
    printf("%d", count);
    return 0;
}
