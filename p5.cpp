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
		
		sort(arr, arr+n);
		int m1 =1, l =1;
		for(int i = 1; i<n; i++)
		{
			if(arr[i-1]+1 == arr[i])
			{
				l++;
			}
			else if(arr[i-1] == arr[i])
			{}
			else2
			{
				if(l > m1)
				m1  = l;
				
				l = 1;
			}
			if(l > m1)
			m1 = l;
		}
		cout<<m1<<"\n";
	}
}

