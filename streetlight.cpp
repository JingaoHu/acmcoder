#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

double func(int pos[],int num, int len)
{
	sort(pos,pos+num);
	double max=0;
	for(int i=1;i<num;i++)
		max=max>(pos[i]-pos[i-1])?max:(pos[i]-pos[i-1]);
	max/=2;
	max=max>pos[0]?max:pos[0];
	max=max>(len-pos[num-1])?max:(len-pos[num-1]);
	
	return max;
}

int main()
{
	int num,len;
	cin>>num>>len;
	int pos[num];
	for(int i=0;i<num;i++)
		cin>>pos[i];
	printf("%.2f\n",func(pos,num,len));
	return 0;
}
