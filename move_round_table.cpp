#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long r,x0,y0,x,y;
	cin>>r>>x0>>y0>>x>>y;
	x=abs(x-x0);
	y=abs(y-y0);
	cout<<ceil(sqrt((double)x*x+y*y)/(2*r))<<endl;
	return 0;
}
