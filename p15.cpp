#include<bits/stdc++.h>
using namespace std;
//doubt how to pass these as an arguments to function
#define N 1000
vector<int> adj[1000];
bool visited[N];
stack<int> s;
bool recStack[N];
// there exists an edge case when there is cycle in the depenedency

bool dfs(int u)
{
	if(visited[u] == false)
	visited[u] = true;
	recStack[u] = true;
	for(int i=0; i < adj[u].size(); i++)
	{
		//root is unvisited
		if((visited[adj[u][i] ] == false) )
		 {
			 if( dfs(adj[u][i] ) == false)
			 return false;
			 
		 }
		//dfs(adj[u][i]);
		else
		if( recStack[adj[u][i] ] == true)
		return false;
	}
	s.push(u);
	recStack[u] = false;
	return true;
}
	

int main()
{
	int _;
	cin>>_;
	
	while(_--)
	{
		int n;
		cin>>n;
		
	
		int u, v;
		//bool visited[n] ;
		for(int i =0;i<n; i++)
		{
			cin>>u;
			cin>>v;
			adj[u].push_back(v);
			visited[i] = false;
		}
		int connected = 0;
		//stack<int> s;
		//call dfs for topo - sort
		bool cycle = false;
		for(int i =0; i<n; i++)
		{
			if(visited[i] == false)
		cycle = dfs(i);
		connected++;
		if(cycle == true)
		break;
		
		}
		//topo sort 
		if(cycle == false){
		while(s.size() > 0)
		{
			cout<<s.top()<<"\t";
			s.pop();
		}
		cout<<"\n";}
		else
		cout<<"Dependency is in deadlock\n";
	
		
		
		
	}
}
		
