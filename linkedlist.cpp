#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* start = NULL;

void insert_beg(int data) 
{
    Node* nd= new Node();
    nd->data=data;

    if(start==NULL)
    {
        nd->next=NULL;
        start=nd;
    }
    else
    {
        nd->next=start;
        start=nd;
    }
}
void traverse()
{
	Node* p= start;
	while(p != NULL)
	{
		cout<<p->data;
		p = p ->next;
	}
}

void insert_end(int number)
{
	Node* nd = new Node();
	nd->data = number;
	
	if(start == NULL)
	{
		//List is EMPTY
		nd->next = NULL;
		start = nd;
	}
	else
	{
		//find the last node address
		Node* p = start;
		nd->next = NULL;
		
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = nd;		
	}
}

int main()
{
	int num, input;
	do{
		cout<<"\nEnter Number: ";
		cin>>num;
		insert_end(num);
		cout<<"\nPress Non Zero Value to continue and 0 to Exit";
		cin>>input;
	}
	while(input != 0);
	cout<<"\n\n \t * * * Data * * *\n\n";
	traverse();
}