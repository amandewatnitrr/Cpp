#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

const int size = 50;
void traverse(int *a,int n);
void insert(int *a,int &n,int &pos);
void delet(int *a,int &n,int pos);
void duplidelet(int *a,int &n);
void sort(int *a,int n);
void remove(int *a,int &n,int r);

int main()
{
	int n,a[size],o,pos,choice,r;
	cout<<"\nEnter Array size = ";
	cin>>n;
	cout<<"\nEnter elements "<<n<<" into the array = ";
	for(int i =0;i<n;i++)
		{
			cin>>a[i];
		}
	system("CLS");
	while(1)
	{
	cout<<"\n1>Traversal \n2>Insertion \n3>Deletion \n4>Sorting \n5>Delete Duplicates \n6>Delete Occurance of specific number \n--> ";
	cin>>o;	
	if(o==1)
		{
			traverse(a,n);
		}
	else if(o==2)
		{
			if(n<50)
				{
					int pos;
					cout<<"\nEnter the position where you want to insert the element =  ";
					cin>>pos;
					traverse(a,n);
					insert(a,n,pos);
					traverse(a,n);
				}
			else
				{
					cout<<"\nArray size is already upto limit task not possible.";
				}	
		}
	else if(o==3)
		{
			cout<<"\nEnter the position at which you want to delete element = ";
			cin>>pos;
			delet(a,n,pos);
			traverse(a,n);
		}
	else if(o==4)
		{
			sort(a,n);
			traverse(a,n);
		}	
	else if(o==5)
		{
			duplidelet(a,n);
			traverse(a,n);
		}	
	else if(o==6)
		{
			cout<<"\nEnter the number whose occurance you want to remove = ";
			cin>>r;
			remove(a,n,r);
			traverse(a,n);
		}	
	cout<<"\nDo you want to continue?? 1=Yes / 0=No --> ";
	cin>>choice;	
	if(choice==0)
		{
			return 1;
		}
	}
	return 0;
}

void traverse(int *a,int n)
{
	cout<<"\nThe Entered array is --> \n ";
	for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
}


void insert(int *a,int &n,int &pos)
{
	
	for(int i =n;i>=pos-1;i--)
		{
			a[i+1]=a[i];
		}	
	n++;
	cout<<"\nEnter the value in "<<pos<<" position = ";
	cin>>a[pos-1];	
}


void delet(int *a,int &n,int pos)
{
	
	for(int i =pos-1;i<n;i++)
		{
			a[i]=a[i+1];
		}	
	n--;

}

void sort(int *a,int n)
{
	int t;
	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
						{
							t = a[i];
							a[i]=a[j];
							a[j]=t;
						}
				}
		}
}

void duplidelet(int *a,int &n)
{
	for(int i=0;i<n;i++)
		{
		 for(int j =i+1;j<n;j++)
			 {
				 if(a[i]==a[j])
				 	{
				 		delet(a,n,i+1);
					}
			 }
		}	
	n--;

}

void remove(int *a,int &n, int r)
{
	for(int i=0;i<n;i++)
		{
			if(a[i]==r)
				{
					delet(a,n,i+1);
				}
		}
}
