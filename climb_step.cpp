#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

long func(int n)
{	
	long a=1,b=1,temp;
	for(int i=3;i<=n;i++)
	{
		temp=a;
		a=b;
		b=temp+a;
	}
	if(n==1) 
		return 0;
	else 
		return b;
}

int main()
{
	int num;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++)
	{
		cin>>a[i];
		cout<<func(a[i])<<endl;
	}
	return 0;
}
