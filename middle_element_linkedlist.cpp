#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* Start=NULL;

void insert_beg(int data)
{
    Node* n = new Node();

    n->data=data;
    
    if(Start==NULL)
    {
        n->next=NULL;
        Start=n;
    }
    else
    {
        n->next=Start;
        Start=n;
    }
}

void traverse()
{
    Node* t = Start;

    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
}

Node* middle()
{
    Node* slow=Start;
    Node* fast=Start;
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main()
{
    int data,input;

    do{
        cout<<"Enter data: ";
        cin>>data;
        insert_beg(data);
        cout<<"Enter any number to continue or 0 to exit: ";
        cin>>input;
    }
    while(input!=0);

    cout<<"The elements of linked list are: ";
    traverse();
    cout<<endl;

    Node* mid = middle();
    cout<<"The middle element is: "<<mid->data;
    

}