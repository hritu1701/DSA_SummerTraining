#include<bits/stdc++.h>
using namespace std;

int size;
int* arr;

void insert_index(int element, int index)
{
	//Shift the existing elements
	for(int i= size; i > index; i--)
		arr[i] = arr[i-1];
		
	//put the element at index 
	
	arr[index] = element;
	size++;	//update the number of elements in the array
}


int main()
{

	cout<<"Enter the size of Array: ";
	cin>> size;	
	

	arr = new int[size];	//Creating Array
	
	//	int* arr = new int[size];
	
	//Print the values of Array
	
	cout<<"\nEnter the Values of Array\n";
	
	int x = 1;
	while(x <= size)
	{
		cin >> arr[x-1];	
		x++;
	}
	int element,index;
    cout<<"Enter the element: ";
    cin>>element;
    cout<<"Enter index to insert: ";
    cin>>index;
    insert_index(element,index);
	
	for(int i=0; i < size; i++)
		cout<<arr[i] <<"\n";
	
	
	return 0;
}