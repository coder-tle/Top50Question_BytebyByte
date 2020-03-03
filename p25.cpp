#define MIN -10000000000


int inorder(Node * p)
{
	if(p)
	{
		int u = p->data -1;
		int v = p->data + 1;
		
		if(p->left)
		u = inorder(p->left);
		
		if( u >= p->data)
		//not BST
		return MIN;
		
		if( p->right )
		v = inorder(p->right);
		if( v<= p->data)
		// not BST
		return MIN;
		
		return p->data;
		
	}
	
}


