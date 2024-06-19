#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int* arr, int size)
{
	for(int i=1; i<size; i++)
	{
		int key = arr[i];
		int j = i-1;
		while(j>=0)
		{
			if(arr[j] > key)
			   arr[j+1] = arr[j];
			else break;
		}
		arr[j+1] = key;
	}
}


int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int*arr=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    insertion_sort(arr,size);

    cout<<"Array after sorting: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}