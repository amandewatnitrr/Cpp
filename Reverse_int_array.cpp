#include<iostream>
#include<conio.h>
#include<string.h>
#define max 50
int a[max];
void reverseintarray(int a[],int );
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter the no. of entries into 1-D array --> ";
	cin>>n;
	cout<<"\n Enter values into the 1-D Array of size "<<n<<" --> ";
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	reverseintarray(a,n);
	return 0;
}


void reverseintarray(int a[], int n)
{
	int t;
	if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
				{
					t = a[i];
					a[i]=a[n-1-i];
					a[n-1-i]=t;
				}
		}
			
	else 
		{
			for(int i=0;i<(n-1)/2;i++)
				{
					t = a[i];
					a[i] = a[n-1-i];
					a[n-1-i] = t;
				}
		}
	cout<<"The Values in reversed array is --> \n";
	for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}	
}
