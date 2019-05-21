#include<stdio.h>
void main()
{int m,n,p,f(int x,int y);
printf("Enter two number:");
scanf("%d%d",&m,&n);
if(m==0||n==0) printf("无最大公约数和最小公倍数");
if(m<n) {p=m;m=n;n=p;}
p=m%n;
if(p==0) printf("最大公约数:%d\n最小公倍数:%d\n",m,n);
else p=f(m,n);
printf("最大公约数:%d\n最小公倍数:%d\n",p,m*n/p);
}
int f(int x,int y)
{int k,i,j;
 k=x%y;i=x;j=y;
if(y%k==0) return(k);
else x=y;y=k;f(x,y);}
