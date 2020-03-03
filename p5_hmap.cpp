#include<bits/stdc++.h>
using namespace std;


int main()
{
	int _;
	cin>>_;
	
	while(_--)
	{
		int n;
		cin>>n;
		
		int arr[n];
		
		for(int i =0; i<n; i++)
		cin>>arr[i];
		
		unordered_map<int,int>hmap;
		unordered_map<int, int>::iterator it;
		for(int i =0; i<n; i++)
		{
			
			it = hmap.find(arr[i]);
			if(it == hmap.end())
			hmap[arr[i]] = 1;
		}
		
		
		int l = 0, m = 0;
		
		for(int i =0; i<n; i++)
		{
			
			
			if(hmap.find(arr[i] - 1 ) != hmap.end())continue;
			
			l = 0;
			int t = arr[i];
			while( hmap.find(t++) != hmap.end())
			l++;
			
			m = max(l, m);
			
			
			
			//it = hmap.find(arr[i] - 1);
			
			
			//while(it 
			
			
			
			
			//if(it == hmap.end())
			//{
				//l = 1;
				//m = max(l, m);
				
				//int t = arr[i];
				//while( true)
				//{
					//t++;
					//it = hmap.find(t);
					//if(it != hmap.end())
					//{   l++;
						//if( l > m)
						//m = l;
					//}
					//else
					//if(it == hmap.end() )
						//break;
				//}
				
			//}
			//else element already a part of some larger sequence
		}
		cout<<m<<"\n";
	}
}
			



