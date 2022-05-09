#include <stdio.h>

int main()
{
    int n, ans, check = 0, temp;
    scanf("%d", &n);
    ans = n * n;
    while (ans > 0)
    {
        temp = ans % 10;
        check += temp;
        ans = ans / 10;
    }
    check == n ? printf("Yes") : printf("No");
    return 0;
}