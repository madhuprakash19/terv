#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num = 9, count = 1, bin = 0, k, m;
    while (1)
    {
        if ((num % n) == 0)
        {
            printf("%d", num);
            break;
        }
        else
        {
            bin = 0;
            k = count;
            m = 1;
            while (k)
            {
                bin = bin + (k & 1) * m;
                m *= 10;
                k >>= 1;
            }
            num = bin * 9;
        }
        count++;
    }
    return 0;
}