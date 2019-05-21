#include <stdio.h>
void main()
{int i,m,sum,j=0;
for(m=100;m<=200;m++)
{sum=0;
 for(i=2;i<m-1;i++)
{if(m%i==0)  sum=sum+1;}
 if(j==4) {printf("\n");j=0;}
 if(sum==0) {printf("%d ",m),j=j+1;};
}
printf("\n");}
