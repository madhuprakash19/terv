#include <stdio.h>

double sqrt(double num)
{
    int i = 0;
    double root = 1;
    while (1)
    {
        i += 1;
        root = (num / root + root) / 2;
        if (i == num + 1)
            break;
    }
    return root;
}

int main()
{
    int n, s1, s2, l;
    float dif, area, ans;
    scanf("%d%d%d%d", &l, &s1, &s2, &n);
    if (s1 > s2)
    {
        dif = s1 - s2;
    }
    else
    {
        dif = s2 - s1;
    }
    area = l * sqrt(2) - sqrt(n * 2);
    ans = area / dif;
    printf("%.2f", ans);

    return 0;
}