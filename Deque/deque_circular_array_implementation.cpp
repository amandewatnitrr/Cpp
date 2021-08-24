#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class dequee
	{
		int arr[MAX];
		int front;
		int rear;
		int size;

		public:

		dequee(int size)
			{
				front = -1;
				rear = 0;
				this->size = size;
			}

		void insertfront(int key);
		void insertrear(int key);
		void deletefront();
		void deleterear();
		bool isFull();
		bool isEmpty();
		int getFront();
		int getRear();
	};

bool dequee::isFull()
	{
		return ((front ==0 &&rear==size-1) || (front==rear+1));
	}

bool dequee::isEmpty()
	{
		return (front==-1);
	}

void dequee::insertfront(int key)
	{
		if(isFull())
			{
				cout<<"Overflow\n"<<endl;
				return;
			}

		if(front == -1)
			{
				front = 0;
				rear = 0;
			}

		else if(front == 0)
			{
				front = size-1;
			}

		else{front = front - 1;}

		arr[front]=key;
	}

void dequee::insertrear(int key)
	{
		if(isFull())
			{
				cout<<"Overflow\n"<<endl;
				return;
			}

		if(front == -1)
			{
				front = 0;
				rear = 0;
			}

		else if(rear == size-1)
			{
				rear = 0;
			}

		else{rear = rear + 1;}

		arr[rear]=key;
	}

void dequee::deletefront()
	{
		if(isEmpty())
			{
				cout<<"Underflow\n"<<endl;
				return;
			}
		
		if(front == rear)
			{
				front = -1;
				rear = -1;
			}

		else
			{
				if(front == size-1)
					{front = 0;}
				else
					{front = front + 1;}

			}
	}

void dequee::deleterear()
	{
		if(isEmpty())
			{
				cout<<"Underflow\n"<<endl;
				return;
			}

		if(front == rear)
			{
				front = -1;
				rear = -1;
			}

		else if(rear==0)
			{
				rear = size-1;
			}
		
		else
			{
				rear = rear - 1;
			}
	}

int dequee::getFront()
	{
		if(isEmpty())
			{
				cout<<"Underflow\n"<<endl;
				return -1;
			}
		return arr[front];
	}

int dequee::getRear()
	{
		if(isEmpty()||rear<0)
			{
				cout<<"Underflow\n"<<endl;
				return -1;
			}
		return arr[rear];
	}

int main()
	{
		int n;
		int x;
		
		cin>>n;
		
		dequee dq(n);
		
		for(int i=0;i<n;i++)
			{
				cin>>x;
				dq.insertfront(x);
			}

		cout<<endl;

		for(int i=0;i<n;i++)
			{
				cout<<dq.getRear()<<" ";
				dq.deleterear();
			}

		return 0;
	}
