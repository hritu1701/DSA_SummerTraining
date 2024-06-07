#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    //Create the array of given size

    int* arr; // pointer to store the address of array
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
