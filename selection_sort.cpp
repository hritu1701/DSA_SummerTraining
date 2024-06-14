#include<bits/stdc++.h>
using namespace std;


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