#include<bits/stdc++.h>
using namespace std;

int sorted_rotated(int* arr,int item,int beg,int end)
{
    if(beg>end) return -1;  // Base condition

    int mid=(beg+end)/2;
    if(arr[mid]==item) return mid; //If item is in middle

    if(arr[mid]>=arr[beg]) // If left subarray is sorted
    {
        if(item>=arr[beg] && item<=arr[mid])
        return sorted_rotated(arr,item,beg,mid-1);  //For left search
        else return sorted_rotated(arr,item,mid+1,end); // For right search
    }
    else
    {
    if(item>=arr[mid] && item<=arr[end])
    return sorted_rotated(arr,item,mid+1,end); //For right search
    else return sorted_rotated(arr,item,beg,mid-1); // For left search
    }
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
    int beg=0;
    int end=size-1;

    int item;
    cout<<"Enter the item to search: ";
    cin>>item;
    int pos = sorted_rotated(arr,item,beg,end);
    if(pos == -1) cout<<"\nItem is not Present";
    else cout<<"\nItem found at index "<<pos;
 

    return 0;
}