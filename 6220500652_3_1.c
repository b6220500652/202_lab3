#include<stdio.h>
int main ()
{
   int i,j,x[5][4],sum[20]={},y,max=0;
   for(i=0;i<5;i++)
   {
      for(j=0;j<4;j++)
   		{
   			scanf("%d",&x[i][j]);
  			sum[i]=sum[i]+x[i][j];
  			if(sum[i]>max)
   			{
      			max =sum[i];
      			y=i;
   			}
   		}
   }
   printf("%d %d",y+1,max);
   return 0;
}
