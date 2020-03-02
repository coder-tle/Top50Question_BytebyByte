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
	
	int n = count(root);
	
	int m = n/2;
	if(n & 1)
	m += 1;
	
	//move pointer by m-1 hops
	//Node * t = root;
	//for(int i = 1; i<m; i++)
	//t = t->next;
	
	// get middle and previous node 
	
	Node * p = root, * q =root;
	
	for(int i =1; i<m; i++)
	{
		q = p;
		p = p->next;
	}
	
	//if(n & 1)
	//{ q = p;
		//p = p->next;
	//}
	
	
	//reverse second half
	
	p->next = reverse(p->next);
	
	//compare first and second half
	
	Node * t1 = root, *t2 = p->next;
	int flag = 0;
	while(t1 != NULL && t2 != NULL && flag == 0)
	{
		if(t1->data == t2->data)
		{
			t1= t1->next;
			t2 = t2->next;
		}
		else
		flag = 1;
	}
	

	
	// reverse second half again to get original linked list back
	p->next = reverse(p->next);
	if(flag == 1)
	cout<<"Linked list elements are not palindrome\n";
	else
	cout<<"Linked list elements are palindrome\n";
}
	
	
