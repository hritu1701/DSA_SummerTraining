#include<bits/stdc++.h>
using namespace std;

void insert_element(int element,int index)
{
    for(int i=n;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    size++;
}
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;


    int* arr; 
    arr=new int[size];

    cout<<"Enter the elements of array: ";
    int x=1;
    while(x<size+1)
    {
        cin>>arr[x-1];
        x++;
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
return 0;
}
