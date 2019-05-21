#include<stdio.h>
void main()
{
	int j;
	double sum=0,n=1;
		for(j=1;j<=20;j++)
		{
			n*=j;
			sum+=n;
		}
	printf("%ld\n",sum);

}