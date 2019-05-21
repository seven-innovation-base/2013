#include<iostream>
using namespace std;

int main()
{
	int a[4],b[4];
	int i,j,k,s,v;
	int c,d;
	for(i=1;i<=9;i++)
		for(j=0;j<=9;j++)
			for(k=0;k<=9;k++)
				for(s=1;s<=9;s++)
				{
					a[0]=i;
					a[1]=j;
					a[2]=k;
					a[3]=s;
					
					c=a[0]*10+a[2];
					
					d=a[3]*10+a[1];
					if(c>d)
						if(c%2==0 && c%5==0 && d%2!=0)
							if(a[3]!=0 && a[0]!=0)
							{
								for(v=0;v<4;v++)
									printf("%d",a[v]);
								printf(" ");
							}
				}
				printf("\n");
	return 0;
}