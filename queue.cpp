#include<bits/stdc++.h>
using namespace std;

const int n=5;

int front=-1,rear=-1;
int Queue[n];

void enque(int item)
{
    if((front==rear+1) || (front==0 && rear == n-1))
    cout<<"Sorry! Queue is full";

    else if(front =-1) //Queue is empty
    {
        front++;rear++;
        Queue[rear]=item;
    } 
    else if(rear=n-1)
    {
        rear=0; // Circular Queue
        Queue[rear]=item;
    }
    else{
        Queue[++rear]=item;

    }
}

void dequeue()
{
	if(front == -1)
	{
		cout<<"\nSorry! Queue is EMPTY";
	}
	else
	{
		cout<<"\nDeleted Element is: " << Queue[front];
		
		if(front == rear) {
			front = -1;
			rear = -1;
		}
		else if(front == n-1) front = 0;
		else front++;
	}
}

int main() {
    int choice;
    char item;
    
    do {
        cout << "\n1. Enque";
        cout << "\n2. Deque";
        cout << "\n0. EXIT";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter the input: ";
                cin >> item;
                enque(item);
                break;

            case 2: {
                dequeue();
                break;
            }

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

