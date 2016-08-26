#include<iostream>

using namespace std;

struct interval
{
	int begin;
	int end;
};

int cnt_lights_left(interval a[],int N, int M)
{
	int result=a[0].end-a[0].begin+1;
	for(int i=1;i<N;i++)
	{
		if(a[i].begin>a[i-1].end)
			result+=(a[i].end-a[i].begin+1);
		else
			result+=(a[i].end-a[i-1].end);
	}
	return (M+1-result);
}

int main()
{
	int M,N;
	cin>>M>>N;
	interval a[N];
	for(int i=0;i<N;i++)
			cin>>a[i].begin>>a[i].end;

	cout<<cnt_lights_left(a,N,M)<<endl;
	return 0;
}
