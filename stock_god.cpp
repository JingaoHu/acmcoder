#include<iostream>

using namespace std;

int sum(int n)
{
	int i=2;
	while(n>i)
	{
		n-=i;
		i++;
	}
	return (i-3)*(i-2)/2+n;
}

int main()
{
	int n;
	while(cin>>n)
		cout<<sum(n)<<endl;
	return 0;
}
