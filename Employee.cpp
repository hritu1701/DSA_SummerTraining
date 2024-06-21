#include<bits/stdc++.h>
#include<string.h>
using namespace std;

struct Employee
{
    string name;
    int emp_id;
    int salary;
    Employee* next;
};

Employee* Start=NULL;

void insert_beg(string name,int emp_id,int salary)
{
    Employee* Tcs = new Employee();
    Tcs->name=name;
    Tcs->emp_id=emp_id;
    Tcs->salary=salary;

    if(Start==NULL)
    {
        Tcs->next=NULL;
        Start = Tcs;
    }
    else
    {
        Tcs->next=Start;
        Start=Tcs;
    }
}
void traverse()
{
    Employee* t=Start;
    while(t!=NULL)
    {
        cout<<t->name<<"\t"<<t->emp_id<<"\t"<<t->salary<<endl;
        t=t->next;
    }
    
}

int main()
{
    string name;
    int emp_id,salary,input;

    do
    {
        cout<<"Enter Employee name: ";
        cin>>name;
        cout<<"Enter Employee id: ";
        cin>>emp_id;
        cout<<"Enter salary: ";
        cin>>salary;
        insert_beg(name,emp_id,salary);
        cout<<"Enter any non zero value to continue and 0 to stop: ";
        cin>>input;
    }
    while(input!=0);
    traverse();
}