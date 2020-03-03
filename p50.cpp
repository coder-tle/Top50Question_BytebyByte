#include<bits/stdc++.h>
using namespace std;
int n ;

void maxHeapify(int arr[], int i)
{
	int l = 2*i +1;
	int r = 2*i + 2;
	int largest;
	if( (l<=n) && (arr[l] > arr[i]) )
	largest = l;
	else
	largest = i;
	
	if( (r <= n) && ( arr[r] > arr[ largest] ) )
	largest = r;
	
	if(largest != i)
	{
		swap(arr[largest] , arr[i] );
		maxHeapify(arr, largest);
	}
}


void buildHeap(int arr[])
{
	for(int i = n/2 ; i>=0; i--)
	maxHeapify(arr, i);
}



void insert(int arr[], int key)
{
	arr[n+1] = key;
	n++;
	
	int t = arr[n];
	int k = n;
	while((k > 0) && (arr[(k-1)/2] < arr[k]) )
	{
		arr[k] = arr[(k-1)/2];
		k = (k-1)/2;
	}
	arr[k] = t;
}


int  pop(int arr[])
{
	int temp = arr[0];
	arr[0] = arr[n];
	n--;
	maxHeapify(arr, 0);
	return temp;
}
void printHeap(int arr[])
{
	for(int i =0; i<=n; i++)
	cout<<arr[i]<<" ";
	cout<<"\n";
	
}
int main()
{
	int N = 1000;
	int arr[N] ;
	
	//int n;
	cin>>n;
	
	for(int i =0; i<n; i++)
	cin>>arr[i];
	n--;
	
	//build heap max
	
	buildHeap(arr);
	
	cout<<"Building printing MaxHeap : "<<"\n";
	printHeap(arr);
	
	
	
	//insert(arr, 10);
			//printHeap(arr);
	//insert(arr, 20);
				//printHeap(arr);
	//insert(arr, 30);
		//printHeap(arr);
		
		
	cout<<pop(arr)<<endl;;
	printHeap(arr);
	
	cout<<pop(arr)<<endl;
	printHeap(arr);
	
	
	
	
	
}
	
	
