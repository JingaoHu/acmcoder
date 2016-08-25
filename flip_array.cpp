#include<iostream>
#include<algorithm>

using namespace std;

void judge(int a[],int len)
{
	int b[len];
	int i;
	for(i=0;i<len;i++)
		b[i]=a[i];
	sort(a,a+len);
	int l=0,r=len-1;
	while(a[l]==b[l])
		l++;		
	while(a[r]==b[r])
		r--;
	while(l<r)
	{
		if(a[l]!=b[r])
		{
			cout<<"no"<<endl;
			return;
		}
		l++;
		r--;
	}
	cout<<"yes"<<endl;
	return ;
}

int main()
{
	int len;
	cin>>len;
	int a[len];
	int i;
	for(i=0;i<len;i++)
		cin>>a[i];
	judge(a,len);
	return 0;
}
