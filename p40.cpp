#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node * next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};



int count(Node * t )
{
	int l = 0;
	
	
	while(t != NULL){
	t = t->next; l++;}
	return l;
}

Node * reverse(Node * root)
{
	Node * q = NULL, *p = root, *t = root;
	
	while(t != NULL)
	{
		t = p->next;
		p->next = q;
		q = p;
		p = t;
	}
	return q;
}



int main()
{
	int n1;
	cin>>n1;
	
	int t;
	Node * root = NULL, * temp1, * prev = NULL;
	for(int i =0; i<n1; i++)
	{
		cin>>t;
		//add to ll 
		if(root == NULL)
		{
			root = new Node(t);
			prev = root;
		}
		else{
		temp1= new Node(t);
		prev->next = temp1;
		prev = temp1;
		}
	}
	
	Node * i = root;
	Node * j = NULL ;
	prev = NULL;
	
	while( i != NULL)
	{
		j = i->next;
		prev = i;
		while(j != NULL)
		{	
			if(j->data == i->data )
			{
				//delete the node pointed by j
				Node * t3 = j;
				prev->next = j->next;
				j = j->next;
				delete(t3);
			}
			else
			{
				prev = j;
				j = j->next;
			}
			
			//update prev and j pointer 
			
			
		}
		// update 
		i = i->next;
	
	}
	i = root;
	while(i != NULL)
	{
		cout<<i->data<<"\t";
		i = i->next;
	}
	
}
	
	

