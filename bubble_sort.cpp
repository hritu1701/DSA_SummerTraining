#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1-i; j++) 
            {
                if (arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]); 
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

    bubbleSort(arr,size);

    cout<<"Array after sorting: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}