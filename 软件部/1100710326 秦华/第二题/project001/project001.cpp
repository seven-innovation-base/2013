// project001.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
int shushu(int a);
void ZSS(int m,int n);
int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	int m = 0,n = 0;
	cout << "������������m, k(m,n������0��,���ǻ��ҳ�����������m�ҽ���m��k������:\n";
	cout << "����m: \n";
	cin >> m;
	cout << "����n:\n";
	cin >> n;
	ZSS(m,n);
	cin.get();
	cin.get();
}

void ZSS(int m,int n)

{
	using namespace std;
	int count = 0;
	for (int i = m;i < 1000000 && count < n;i++)
	{
		if (i == 1) continue;
		else if (shushu(i)!=0)
		{
			count++;
			cout << i << "  ";
		}
		else continue;
	}
}
int shushu(int a)
{
	using namespace std;
	int k=1;
	for(int i=2;i<=a;i++)
		{
			if(a%i==0)
			k=0;
		else
			return k;
	}
}