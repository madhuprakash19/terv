#include <stdio.h>

int main()
{
    int year, temp;
    scanf("%d", &year);
    // temp = year%400;
    // printf("%d\n",temp);
    if ((year % 400) == 0)
    {
        // printf("if 1");
        printf("Yes");
    }
    else if ((year % 100) == 0)
    {
        // printf("if 2");
        printf("No");
    }
    else if ((year % 4) == 0)
    {
        // printf("if 3");
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}