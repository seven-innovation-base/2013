#include <stdio.h>
#include <math.h>
void main ()
{	
	int m,n,i;
	double k;
	for(m=100;m<200;m++)
	{
          if(n%10==0) 
			  printf("\n");
				k=sqrt(m);
				for(i=2;i<=k;i++)
					if(m%i==0)
						break;
				if(i>k)
				{
					printf("%5d",m);
					n++;
				}
	}
				
}