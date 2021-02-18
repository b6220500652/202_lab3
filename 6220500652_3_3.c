#include <stdio.h>
int main()
{
    int k,x = 2;
    scanf("%d",&k);
    if (k==1)
    {
        printf("1\n");
    }
    while(k!=1)
	{
        while(k%x==0)
		{
            printf("%d\n",x);
            k=k/x;
        }
        x++;
    }
    printf("0");
    return 0;
}
