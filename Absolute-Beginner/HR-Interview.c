#include <stdio.h>

int main()
{
    char a, str[1000000];
    scanf("%c", &a);
    scanf("%s", str);

    // printf("%s",str);
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}