#include<stdio.h>
int main()
{
   int i,a,t,n,x=0,time[48]={},prime_t;
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
      scanf("%d %d",&t,&n);
      time[t-1]=time[t-1]+n;
   }
   for(i=0;i<48;i++)
   {
      if(x<time[i])
      {
      	x=time[i];
      	prime_t=i;
      }
   }
   printf("%d %d",prime_t+1,time[prime_t]);
   return 0;
}
