#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int count=0;
    while(n>0)
    {
        int lastdigit=n%10;
        n=n/10;
        count++;
    }
    return count;
}

 
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int digit=countDigit(n);
    cout<<"Number of digit count is: "<<digit<<endl;

}