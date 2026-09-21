#include<stdio.h>
int main()
{
    int n;
    printf("enter a n value\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int sum+=i;
    }
    printf("sum of n numbers is %d",sum);
    return 0;
}