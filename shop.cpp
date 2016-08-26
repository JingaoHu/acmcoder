#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n_good,value_limit,get,result;
	while(cin>>n_good)
	{
		result=0;
		get=0;
		cin>>value_limit;
		int a[n_good];
		for(int i=0;i<n_good;i++)
			cin>>a[i];
		sort(a,a+n_good);
		for(int i=0;i<n_good;i++)
		{
			get+=a[i];
			result++;
			if(get>value_limit)
			{
				result--;
				break;
			}
			
		}

		cout<<result<<endl;
	}
	return 0;
}
