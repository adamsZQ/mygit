#include<stdio.h>
#define N 50
int main()
{
    int num[N];
    int n,i,x,ins;
    printf("Inpur array size:");
    scanf("%d",&n);
    printf("Input array:");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Input x:");
    scanf("%d",&x);
    for(i = 0;i<n;i++)
    {
        if (x>num[i])
        {
            ins = i;
        }

    }
    for(i = n-1;i>ins;i--)
    {
        num[i+1]=num[i];
    }
    num[ins+1] = x;
    printf("After insert %d:\n",x);
    for(i = 0;i<=n;i++)
    {
        printf("%4d",num[i]);
    }
    return 0;
}
