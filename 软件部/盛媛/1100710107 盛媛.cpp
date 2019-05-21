#include<iostream.h>
fun(int x,int y);
void main()
{ 
	int i,m,k,a[i];
	cout<<"please input m,k:"<<endl;
	cin>>m>> k;
	for(i=0;i<k;i++)
	{
	a[i]=fun(m,k);
	cout<<a[i]<<endl;
	}
	
}
int fun(int x,int y)
{
  int x,y,i,j;
  int k=1,b[k];
  for(i=x;;i++)
  {
	  for(j=2;j<i;j++)
	  {
		  if(i%j==0);
	      break;
		  else return i;
	  }
	 do
	 {
	  b[k]=i;
	  k++;
	 }
	 while(y<k);
	 
  }
  return b[k];
}
