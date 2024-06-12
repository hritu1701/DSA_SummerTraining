#include<bits/stdc++.h>
using namespace std;

int binary_search(int* arr,int size)
{
    int beg=0 ,end=size-1;
    
    while(beg<=end)
   {
    
    int mid=(beg+end)/2;
    if((arr[mid]==1)&&((mid==0)||(arr[mid-1]==0)))
    return mid;

    else if (arr[mid==0]) beg=mid+1;
    else end=mid-1;
   }
   return -1;
}

int main()
{
    int size;
    int* arr;
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
    
    int pos = binary_search(arr,size);
    if(pos == -1) cout<<"\nItem is not Present";
    else cout<<"\nItem found at index "<<pos;
 

    return 0;
}