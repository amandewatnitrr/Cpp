#include <bits/stdc++.h>
using namespace std;

struct node 
	{
		int data;
		node *prev,*next;

		static node* getnode(int data)
			{
				node* newnode = (node*)malloc(sizeof(node));
				newnode->data = data;
				newnode->prev = newnode->next = NULL;
				return newnode;
			}
	};

class dequee
	{
		node *front;
		node *rear;
		int size;

		public:
		
		dequee()
			{
				front = rear = NULL;
				size = 0;
			}

		void insertfront(int data);
		void insertrear(int data);
		void deletefront();
		void deleterear();
		int getfront();
		int getrear();
		int sizee();
		bool isEmpty();
		void erase();
	};

int dequee::sizee()
	{
		return size;
	}

bool dequee::isEmpty()
	{
		return (front==NULL);
	}

void dequee::insertfront(int data)
	{
		node* newnode = node::getnode(data);
		
		if(newnode == NULL)
			{
				cout<<"Overflow\n"<<endl;
			}

		else
			{
				if(front == NULL)
					{
						rear = front = newnode;
					}
					
				else
					{
						newnode->next = front;
						front->prev = newnode;
						front = newnode;
					}
				size++;
			}
	}

void dequee::insertrear(int data)
	{
		node* newnode = node::getnode(data);
		
		if(newnode == NULL)
			{
				cout<<"Overflow\n"<<endl;
			}

		else
			{
				if(rear == NULL)
					{
						rear = front = newnode;
					}
					
				else
					{
						newnode->prev = rear;
						rear->next = newnode;
						rear = newnode;
					}
				size++;
			}
	}

void dequee::deletefront()
	{
		if(isEmpty())
			{
				cout<<"Underflow\n"<<endl;
				return;
			}

		else
			{
				node* temp = front;
				front = front->next;

				if(front == NULL)
					{
						rear = NULL;
					}

				else
					{
						front->prev = NULL;
					}
				free(temp);
				size--;
			}
	}

void dequee::deleterear()
	{
		if(isEmpty())
			{
				cout<<"Underflow\n"<<endl;
				return;
			}

		else
			{
				node* temp = rear;
				rear = rear->prev;

				if(rear == NULL)
					{
						front = NULL;
					}

				else
					{
						rear->next = NULL;
					}
				free(temp);
				size--;
			}
	}

int dequee::getfront()
	{
		if(isEmpty())
			{
				return -1;
			}
		return front->data;
	}

int dequee::getrear()
	{
		if(isEmpty())
			{
				return -1;
			}
		return rear->data;
	}

void dequee::erase()
	{
		rear = NULL;
		while(front!=NULL)
			{
				node* temp = front;
				front = front->next;
				free(temp);
			}
		size = 0;
	}

int main()
	{
		int n,x;

		dequee dq;
		cin>>n;
		for(int i=0;i<n;i++)
			{
				cin>>x;
				dq.insertfront(x);
			}
		
		for(int i=0;i<n;i++)
			{
				cout<<dq.getrear()<<" ";
				dq.deleterear();
			}
		dq.erase();

		return 0;
	}
