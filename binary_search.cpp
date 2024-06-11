#include<bits/stdc++.h>
using namespace std;

int search(int* arr,int size,int item)
{
    int beg=0 ,end=size-1;
    
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(item<arr[mid]) end=mid-1;
        else if (item>arr[mid]) beg=mid+1;
        else return mid;
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
    int item;
    cout<<"Enter the element to search: ";
    cin>>item;

    int ele= search(arr,size,item);
 

    return 0;
}