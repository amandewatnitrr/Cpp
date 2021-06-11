#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * First Repeating Element 
 * Given an array arr[] of size N. The task is to find the first operating element in the array of integers, 
 * i.e., an element that occurs more than once and whose index of first occurance is smallest
 * */
int main()
{	
	int n;
	cout<<"\nEnter size of array = ";
	cin>>n;
	int a[n];
	cout<<"\nEnter values into array = ";
	for(int i=0;i<n;i++){cin>>a[i];}
	cout<<endl;
	int k=0;
	for(int i =0;i<n;i++)
		{
			for(int j =i+1;j<n;j++)
				{
					if(a[i]==a[j] && k==0)
						{
							k=i+1;
						}
				}
			if(k==!0){break;}
		}
	cout<<"\nNo. first repeated at index = "<<k<<endl;
	return 0;
}
