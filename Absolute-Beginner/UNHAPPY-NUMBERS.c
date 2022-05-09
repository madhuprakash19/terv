#include <stdio.h>

int happy(int num)
{

    int sum;
    do
    {
        sum = 0;
        while (num > 0)
        {
            int temp = num % 10;
            sum = sum + (temp * temp);
            num = num / 10;
        }
        num = sum;
    } while (num > 9);
    return num;
}

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    for (int i = n1; i <= n2; i++)
    {
        int check = happy(i);
        if (check != 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}