// Linked list to store contact

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct Contact
{
	string name;
	int number;
	Contact* link;
};

Contact* phonebook = NULL;

void insert_beg(string name, int contact)
{
	Contact* nd = new Contact();
	
	nd->name = name;
	nd->number = contact;
	
	if(phonebook == NULL)
	{
		//List is EMPTY
		nd->link = NULL;
		phonebook = nd;
	}
	else
	{
		nd->link = phonebook;
		phonebook = nd;
	}
}

void traverse()
{
	Contact* p = phonebook;
	while(p != NULL)
	{
		cout<<p->name <<"\t" <<p->number <<endl;
		p = p ->link;
	}
}

void insert_end(string name, int contact)
{
	Contact* nd = new Contact();
	
	nd->name = name;
	nd->number = contact;
	
	if(phonebook == NULL)
	{
		//List is EMPTY
		nd->link = NULL;
		phonebook = nd;
	}
	else
	{
		//find the last node address
		Contact* p = phonebook;
		
		nd->link = NULL;
		
		while(p->link != NULL)
		{
			p = p->link;
		}
		p->link = nd;		
	}
}

int main()
{
	string n;
	int num, input;
	do{
		cout<<"Enter Name: ";
		cin>>n;
		cout<<"\nEnter Number: ";
		cin>>num;
		insert_end(n, num);
		cout<<"\nPress Non Zero Value to continue and 0 to Exit";
		cin>>input;
	}
	while(input != 0);
	cout<<"\n\n \t * * * CONTACT LIST * * *\n\n";
	traverse();
}