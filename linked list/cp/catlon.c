#include<stdio.h>
int catlon(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
        sum+=catlon(n-i-1)*catlon(i);
        }
        return sum;
    }
}
int main()
{
    int n=100;
    int ans=catlon(5);
    printf("%d",ans);
    return 0;
}