#include<stdio.h>
void main()
{int m,n,p,f(int x,int y);
printf("Enter two number:");
scanf("%d%d",&m,&n);
if(m==0||n==0) printf("�����Լ������С������");
if(m<n) {p=m;m=n;n=p;}
p=m%n;
if(p==0) printf("���Լ��:%d\n��С������:%d\n",m,n);
else p=f(m,n);
printf("���Լ��:%d\n��С������:%d\n",p,m*n/p);
}
int f(int x,int y)
{int k,i,j;
 k=x%y;i=x;j=y;
if(y%k==0) return(k);
else x=y;y=k;f(x,y);}
