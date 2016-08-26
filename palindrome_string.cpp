#include<iostream>

using namespace std;

bool is_almost_palindrome(char*s,int len,int skip_pos)
{
	int l=0,r=len-1;
	while(l<r)
	{
		if(l==skip_pos)
			l++;
		if(r==skip_pos)
			r--;
		if(s[l]!=s[r])
			return false;
		l++;
		r--;
	}
	return true;
}

int main()
{
	char a[11];
	cin>>a;
	int len=0;
	while(a[len]!='\0')
		len++;
	for(int i=-1;i<len;i++)
		if(is_almost_palindrome(a,len,i))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	cout<<"NO"<<endl;
	return 0;
}
