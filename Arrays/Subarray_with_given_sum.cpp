#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * Subarray with given Sum
 * Given an unsorted array A of size N  of non-negative integers, find a continuous subarray 
 * which adds to a given number s.
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
	int expected;
	cout<<"\nEnter the expected Sum = ";
	cin>>expected;
	int sum;
	for(int i = 0;i<n;i++)
		{
			sum =0;
			for(int j =i;j<n;j++)
				{
					sum = sum + a[j];
					if(sum == expected)
						{	
							cout<<"\nThe sum of elements from "<<i+1<<" to "<<j+1<<" is "<<sum;
							cout<<"\nThe Subarray is --> ";
							for(int k =i;k<=j;k++)
								{
									cout<<a[k]<<" ";
								}
							return 0;
						}
				}
		}
		cout<<endl;
	return 0;
}
