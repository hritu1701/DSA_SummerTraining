#include<bits/stdc++.h>
using namespace std;

void selection_sort(int* arr,int size)
{
    for(int i=0; i< size-1; i++) 
	{
		int min = i;
		for(int j= i+1; j<size; j++)
		   {
		   	 if(arr[j] < arr[min]) 
             min = j;
		   }
		if(i != min)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
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

  

    cout<<"Array after sorting: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}