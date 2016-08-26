#include<iostream>

using namespace std;

int max_common_divisor(int m,int n)
{
	int temp;
	while(m%n!=0)
	{
		temp=m;
		m=n;
		n=temp%n;
	}
	return n;
}

int main()
{
	int n_monstor,value;
	long sum;
	while(cin>>n_monstor)
	{
		cin>>sum;
		for(int i=0;i<n_monstor;i++)
		{
			cin>>value;
			if(value<=sum)
				sum+=value;
			else 
				sum+=max_common_divisor(sum,value);
		}
		cout<<sum<<endl;
	}
	return 0;
}
