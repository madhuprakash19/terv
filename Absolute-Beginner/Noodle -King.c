#include<stdio.h>

int main()
{
    long long int a,ans=1;
    scanf("%lld",&a);
    int count=0;
    while(ans<a){
        ans = ans*2;
        count++;
    }
    printf("%d",--count);
    return 0;
}
