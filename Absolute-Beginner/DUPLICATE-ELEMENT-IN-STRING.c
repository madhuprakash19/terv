#include <stdio.h>

int main()
{
    char a[100000];
    int count = 0, i = 0, j = 0;
    scanf("%s", a);
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    // printf("%d",count);
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (a[j] == a[i])
            {
                printf("%c ", a[i]);
            }
        }
    }
    return 0;
}