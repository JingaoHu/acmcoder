#include<iostream>
using namespace std;

struct node
{
	int val;
	node * next;
};

bool check(node * begin,node * end)
{
	node *p=begin->next;
	while(p->val<begin->val && p->val < end->val)
		p=p->next;
	if(p->val==end->val)
		return true;

	p=end->next;
	while(p->val<end->val && p->val<begin->val)
		p=p->next;
	if(p->val==begin->val)
		return true;
	
	return false;
}
int main()
{	
	int n;
	while(cin>>n)
	{
		int result=0;
        node *p_nodes=new node [n];
        for(int i=0;i<n;i++)
		{	
        	cin>>p_nodes[i].val;
			p_nodes[i].next=p_nodes+(i+1)%n;				  
        }
		for(int i=0;i<n-1;i++)
        	for(int j=i+1;j<n;j++)
            	if(check(p_nodes+i,p_nodes+j))
                	result++;
 
        cout<<result<<endl;
	}
      return 0;
}
