#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * Maximum Subarray Sum using Kadane's Algorithm
 * The advantage of Kadane's algorithm is that it has a time complexity of O(n).
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
	/*Kadane's */
	int sum=0,maxsum=0;
	for(int i=0;i<n;i++)
		{
			sum +=a[i];
			if(sum<0){sum=0;}
			if(maxsum<sum){maxsum=sum;}
		}
	cout<<maxsum<<" is maximum sum that can be obtained from subarrays of given array."<<endl;
	return 0;
}
