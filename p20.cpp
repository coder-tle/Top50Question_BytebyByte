#include<bits/stdc++.h>
using namespace std;

void foo(stack<int> & st, int target, int level)
{
	if(st.size() > 1)
	{
		int u = st.top();st.pop();
		foo(st, target, level + 1);
		int v = st.top();st.pop();// if size of stack is zero then how to pop()
		if(level >=target)
		swap(u,v);
		st.push(v);
		st.push(u);
	}
}
		


int main()
{
	stack<int> st, t;
	
	int n;
	cin>>n;
	int t1;
	for(int i =0; i<n; i++)
	{
		cin>>t1;
		st.push(t1);
	}
	int t2 = n;
	t = st;
	while(t2)
	{
		cout<<t.top()<<"\t";
		t.pop();
		t2--;
	}
	
	for(int i =0; i<n; i++)
	foo(st,i+1,1);
	
	cout<<"Reverse stack \n";
	 t2 = n;
	 t = st;
	while(t2)
	{
		cout<<t.top()<<"\t";
		t.pop();
		t2--;
	}
	//cout<<*i<<"\t";
	cout<<"\n";
	
}
