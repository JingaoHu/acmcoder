#include<iostream>
#include<stdio.h>

using namespace std;

void replace(char &c)
{
	if((c>='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z'))
		c='1';
	else 
		c='0';
	return ;
}

void likehood(char a[],char b[])
{
	float result=0;
	int i=0,count=0;
	while(a[i]!='\0')
	{
		replace(a[i]);
		if(a[i]==b[i])
			count++;
		i++;
	}
	result=(float)count/i;
	result*=100;
	printf("%.2f%%\n",result);
	return ;
}

int main()
{
	char a[1000],b[1000];
	cin>>a>>b;
	likehood(a,b);
	return 0;
}
