#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	float sqrt;
	printf("100~200������:\n");
	for(a=100;a<200;a++) 
	{
		for(i=2;i<=sqrt(a);i++) 
			if(!(a%i))
				printf("%d������",a);
	}
	printf("\n");
}
