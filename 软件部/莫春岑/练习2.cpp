#include<iostream>
main()
{
	using namespace std;
	int m,k,t=0,i,j,a[100];
	cout<<"Enter m and k:";
	cin>>m;
	cin>>k;
    
     	for(i=m+1;t<k ;i++)
		{
			for(j=2;j<i;j++)
				if (i%j==0)break;
			     if(i==j)
				 {
					a[t]=i;
                      t++;
				 }
		}
	for(i=0;i<k;i++)
	    cout<<a[i]<<endl;
	return 0;
}
