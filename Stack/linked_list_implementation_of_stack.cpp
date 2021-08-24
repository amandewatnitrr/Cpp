// C++ program to Implement a stack
//using singly linked list
#include <bits/stdc++.h>
using namespace std;

// Declare linked list node

struct Node
{
	int data;
	struct Node* link;
};

struct Node* top;

// Utility function to add an element
// data in the stack insert at the beginning
void push(int data)
{
	
	// Create new node temp and allocate memory
	struct Node* temp;
	temp = new Node();

	// Check if stack (heap) is full.
	// Then inserting an element would
	// lead to stack overflow
	if (!temp)
	{
		cout << "\nHeap Overflow";
		exit(1);
	}

	// Initialize data into temp data field
	temp->data = data;

	// Put top pointer reference into temp link
	temp->link = top;

	// Make temp as top of Stack
	top = temp;
}

// Utility function to check if
// the stack is empty or not
int isEmpty()
{
	return top == NULL;
}

// Utility function to return top element in a stack
int peek()
{
	
	// Check for empty stack
	if (!isEmpty())
		return top->data;
	else
		exit(1);
}

// Utility function to pop top
// element from the stack
void pop()
{
	struct Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow" << endl;
		exit(1);
	}
	else
	{
		
		// Top assign into temp
		temp = top;

		// Assign second node to top
		top = top->link;

		// Destroy connection between
		// first and second
		temp->link = NULL;

		// Release memory of top node
		free(temp);
	}
}

// Function to print all the
// elements of the stack
void display()
{
	struct Node* temp;

	// Check for stack underflow
	if (top == NULL)
	{
		cout << "\nStack Underflow";
		exit(1);
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{

			// Print node data
			cout << temp->data <<" ";

			// Assign temp link to temp
			temp = temp->link;
		}
	}
}


int main()
{
	
	// Push the elements of stack
    int n,x,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        {
            cin>>x;
            push(x);
        }

	for(int i=0;i<m;i++)
        {
            pop();
        }

	display();
	return 0;
}
