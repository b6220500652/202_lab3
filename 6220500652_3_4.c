#include<stdio.h>
int funtion(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
           return 0;
        }
    }
    return 1;
}
int main()
{
    int i,n,max,min;
    scanf("%d",&n);
    for (i=n; ;i++)
    {
        if(funtion(i))
        {
            max=i;
            break;
        }
    }
    min=max;
     for (i=n;i>1;i--)
    {
        if (funtion(i))
        {
            min=i;
            break;
        }
    }
    if(n-min>max-n)
    {
        printf("%d",max);
    }
    else
    printf("%d",min);
}
