#include<iostream>

using namespace std;

int max_passengers(int delta[],int n_stop)
{
	int result=delta[0];
	int sum=0;
	for(int i=0;i<n_stop;i++)
	{
		sum+=delta[i];
		result=result>sum?result:sum;
	}
	return result;
}

int main()
{
	int n_stop;
	cin>>n_stop;
	int delta[n_stop];
	int on,off;

	for(int i=0;i<n_stop;i++)
	{
		cin>>off>>on;
		delta[i]=on-off;
	}
	cout<<max_passengers(delta,n_stop)<<endl;
	return 0;
}
