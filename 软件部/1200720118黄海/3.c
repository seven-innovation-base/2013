#include<stdio.h>
void main()
{
	
	int i,n,m;
	printf("enter two numbers:");
	scanf("%d%d",&n,&m);
	for(i=n;i>1;i--)
		if((n%i==0)&&(m%i==0))
		{
		printf("���Լ����%d\n",i);
			break;
		}
}