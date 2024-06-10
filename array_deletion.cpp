#include<bits/stdc++.h>
using namespace std;

int size;
int* arr;

void delete_index(int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[index]=arr[index+1];
    }
    size--;
}

int main()
{
    cout<<"Enter the size of array: ";
    cin>>size;
    arr=new int[size];

    cout<<"Enter the elements of array: ";
    int i=0;
    while(i<size)
    {
        cin>>arr[i];
        i++;
    }
    int index;
    cout<<"Enter the index to delete: ";
    cin>>index;

    delete_index(index);

    cout<<"Array after deletion: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}