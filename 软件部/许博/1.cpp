#include<stdio.h>
#include<math.h>
int main()
{
	int a,i;
	printf("100~200µÄËØÊı:\n");
	for(a=100;a<200;a++)
	{
		for(i=2;i<=sqrt(a);i++) 
			if(a%i==0)
				printf("%d ",a);
	}
	printf("\n");
	return 0;
}


