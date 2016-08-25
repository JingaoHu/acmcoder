#include<iostream>

using namespace std;

int cnt_digit_one(int n)
{
	int result=0;
	while(n)
	{
		n=n&(n-1);
		result++;
	}
	return result;
}

int main()
{
	int l,r,m;
	cin>>l>>r>>m;
	int i,result=0;
	for(i=l;i<=r;i++)	
		if(cnt_digit_one(i)==m)
			result++;
	if(result==0)
		result=-1;
	cout<<result<<endl;
	return 0;
}
