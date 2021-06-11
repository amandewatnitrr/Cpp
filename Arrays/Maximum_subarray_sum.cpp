#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * Maximum Sum obatined from 1 subarray of given array
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
	int sum,maxsum=0;
	for(int i = 0;i<n;i++)
		{
			for(int j =i;j<n;j++)
				{
					sum = 0;
					for(int k =i;k<=j;k++)
						{
							sum = sum + a[k];
						}
					if(maxsum<sum){maxsum = sum;}
				}
		}
		cout<<maxsum<<" is maximum sum that can be obtained from subarrays of given array."<<endl;
	return 0;
}
