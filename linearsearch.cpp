#include<bits/stdc++.h>
using namespace std;

int search(int* arr,int size,int item)
{
    int found=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==item)
        {
            found=i;
            break;
        }
    }
    return found;
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