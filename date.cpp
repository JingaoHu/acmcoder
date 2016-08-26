#include<iostream>

#define abs(x) (x>0?x:-x)

using namespace std;

int main()
{
	int a,b,s;
	cin>>a>>b>>s;
	if(s<(abs(a)+abs(b)) || (s-abs(a)-abs(b))%2==1)
		cout<<"No"<<endl;
	else 
		cout<<"Yes"<<endl;
	return 0;
}
