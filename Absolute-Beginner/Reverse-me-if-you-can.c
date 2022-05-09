#include <stdio.h>

int main()
{
    char a[100];
    scanf("%[^\n]%c", a);
    int n = 0, i, j;
    while (a[n] != '\0')
    {
        n++;
    }
    // int k=n-2;
    // int i=0;
    // while(i<n){
    //     if(a[k]==' '){
    //         k--;
    //     }
    //     if((a[i]!=' ') && (a[k]!=' ')){
    //         printf("%c",a[k--]);
    //         i++;
    //     }
    //     else if((a[i]==' ')){
    //         printf(" ");
    //         i++;
    //     }
    // }
    // printf("%c",a[n-1]);
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (a[i] == ' ' || a[i] == '?' || a[i] == '!')
        {
            j++;
            continue;
        }
        if (a[j] == ' ' || a[j] == '?' || a[j] == '!')
        {
            i--;
            continue;
        }
        if ((a[i] > -'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    printf("%s", a);

    return 0;
}