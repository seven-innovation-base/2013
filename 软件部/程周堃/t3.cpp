#include <stdio.h>

min(int x,int y)
{
        int i,m;
        m=x>y?x:y;
        for(i=m;;i++)
		{
                if(i%x==0 && i%y==0)
				{
                     break;
                }
        }
        return i;
}
max(int x,int y)
{
        int i,m;
        m=x<y?x:y;
        for(i=m;i>=1;i--)
		{
                if(x%i==0 && y%i==0)
				{
                        break;
                }
        }
        return i;
}

int main()
{
        int a,b,z,k;
        while(1)
		{
                printf("Enter two numbers：");
                scanf("%d%d",&a,&b);
                z=min(a,b);
                k=max(a,b);
                printf("最小公倍数是%d\n",z);
                printf("最大公约数是%d",k);
                printf("\n\n");
        }
        return 0;
}
