#include <stdio.h>
// this code might not run in few compilers
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int c[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (c[j] > c[j + 1])
                swap(&c[j], &c[j + 1]);
}

int main()
{
    int n1, n2, i = 0;
    scanf("%d%d", &n1, &n2);
    int c[n1 + n2];
    for (i = 0; i < n1 + n2; i++)
        scanf("%d", &c[i]);
    bubblesort(c, n1 + n2);

    int j = 0;
    printf("%d ", c[j++]);
    while (j < i)
    {
        if (c[j - 1] < c[j])
            printf("%d ", c[j]);
        j++;
    }
    return 0;
}