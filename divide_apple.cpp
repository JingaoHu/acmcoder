#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n_bears,result;
	cin>>n_bears;
	if(n_bears<=1 || n_bears>=9)
		result=0;
	else 
		result=pow(n_bears,n_bears)-n_bears+1;
	cout<<result<<endl;
	return 0;
}


