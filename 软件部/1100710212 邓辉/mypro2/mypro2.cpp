#include<iostream>
using namespace std;
int main()
{
	int i;
	int m,k,b,c,d;

	printf("输入时请安此格式：m,k\n");
	scanf("%d,%d",&m,&k);
	b=m+1;

	d=0;
	while(b>m)
	{
		c=0;
		if(b==1)
		{
			printf("%d ",b);
			continue;
		}
		for(i=2;i<b;i++)
		{
			if(b%i==0)
				c++;
		}
		if(c==0)
		{
			printf("%d ",b);
			d++;
		}
		if(d>=k)
			break;
		b++;
	}
	printf("\n");
	return 0;
}