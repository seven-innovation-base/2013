#include<stdio.h>
int main()
{
	int i,j=1;
	double sum;
	sum=1.0;
	for(i=1;i<=20;i++)
		j=j*i;
		sum=sum+j;
	printf("%ld\n",sum);
}
