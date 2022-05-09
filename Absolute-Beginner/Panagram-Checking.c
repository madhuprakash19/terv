#include <stdio.h>

int main()
{
    char a[999999];
    int s = 97, c = 65, i = 0, j, flag;
    scanf("%[^\n]%*c", &a);
    for (i = 0; i < 26; i++)
    {
        j = 0;
        flag = 0;
        while (a[j] != '\0')
        {
            if ((int)(a[j]) == (s + i) || (int)(a[j]) == (c + i))
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag != 1)
        {
            printf("FALSE");
            return 0;
        }
    }

    printf("TRUE");

    return 0;
}