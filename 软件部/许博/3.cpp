#include<stdio.h>
int main()
{
	int m,n,i,j,s;
	printf("Enter two numbers:\n");
	scanf("%d,%d",&m,&n);
	s=m*n;
	while((i=m%n)!=0)
	m=n;
	n=i;
	j=s/n;
    printf("���Լ����%d\n",n);
	printf("��С��������%d\n",j);
}
