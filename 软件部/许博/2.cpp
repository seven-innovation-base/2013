#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	float sqrt;
	printf("100~200的素数:\n");
	for(a=100;a<200;a++) 
	{
		for(i=2;i<=sqrt(a);i++) 
			if(!(a%i))
				printf("%d是素数",a);
	}
	printf("\n");
}
