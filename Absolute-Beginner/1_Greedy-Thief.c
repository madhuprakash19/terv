#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    int n1, n2;
    n1 = a % 9;
    printf("%d", n1);
    n2 = a / 9;
    for (int i = 0; i < n2; i++)
        printf("9");
    return 0;
}