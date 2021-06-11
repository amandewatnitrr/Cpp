#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * Given an Array arr[] of N integers including 0.
 * The task is to find the smallest positive number missing from the array.
 * */
int main()
{	
	int n;
	cout<<"\nEnter size of array = ";
	cin>>n;
	int a[n],t;
	cout<<"\nEnter values into array = ";
	for(int i=0;i<n;i++){cin>>a[i];}
	cout<<endl;
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
				{
					if(a[j]>a[j+1])
						{
							t = a[j];
							a[j] = a[j+1];
							a[j+1] = t;
						}
				}
		}
	cout<<"\nThe array after sorting is = ";	
	int small; //k=0,pos
	for(int i=0;i<n;i++){cout<<a[i]<<" ";}
	cout<<endl;
	small=1;
	
	for(int i=0;i<n;i++)
		{
			
			if( a[i]>0 ) 
				{
				 if(a[i]==small)
					{small++;}
				 else
					{
						cout<<small<<" is smallest missing positive number from the given array.";
						return 0;
					}
				}
		}
		
		
	return 0;
}
