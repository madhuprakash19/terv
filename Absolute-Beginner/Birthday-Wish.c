#include <stdio.h>

int main()
{
    int a[1000], n, k, temp, count = 0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        for (int j = 0; j < n; j++)
        {
            if (temp == a[j])
            {
                count++;
            }
        }
        if (count != k)
        {
            printf("%d ", temp);
        }
        count = 0;
    }
}