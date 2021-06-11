#include<iostream>
#include<conio.h>
#define max 20

using namespace std;

int binarysearch(int [],int ,int);
void bubblesort(int [],int);

int main()
{
	int a[max],n,t;
	cout<<"\nEnter the size of Array --> ";
	cin>>n;
	cout<<"\n Enter the values into the Array --> ";
	for(int i=0;i<n;i++)
		{
			cin>>*(a+i);
		}
	system("CLS");
	cout<<"\nThe Array you entered is --> \n";
	for(int i=0;i<n;i++)
		{
			cout<<*(a+i)<<" ";
		}	
	cout<<endl;
	cout<<"\nEnter the type of sorting you want to perform \n1>Bubble Sort  \n2>Selection Sort  \n3>Insertion Sort  \n--> ";
	cin>>t;
	if(t==1)
		{bubblesort(a,n);}
	cout<<"\nEnter the type of Search you want to perform --> \n1>Binary Search \n2>Linear Search \n--> ";
	cin>>t;
	cout<<"\nEnter the number to be searched for --> ";
	int ele;
	cin>>ele;
	if(t==1)
		{binarysearch(a,n,ele);}
	return 0;
}

int binarysearch(int *a,int n,int ele)
{
	int mid,beg=0;
	int last=n-1;
	while(beg<=last)
		{
			mid=(beg+last)/2;
			if(a[mid]==ele)
				{return mid;}
			else if(ele>a[mid])
				{beg = mid+1;}
			else
				{last = mid-1;}		
		}
	return 2;	
}

void bubblesort(int *a,int n)
{
	int t;
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1-i;j++)
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
		}
}
