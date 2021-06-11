#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * Maximum Circular Subarray 
 * Here the concept of Kadane's algorithm is used.
 * */
 
 int kadane(int [],int );
 
int main()
{	
	int n;
	cout<<"\nEnter size of array = ";
	cin>>n;
	int a[n],b[n],tsum=0,cmaxsum=0,kmaxsum=0,maxsum=0;
	cout<<"\nEnter values into array = ";
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tsum = tsum + a[i];
			b[i]=-1*a[i];
		}
	
	kmaxsum = kadane(a,n); // To check for Non-Circular Maximum Subarray Sum
	int ncsum = kadane(b,n);	 // To obtain the maximum sum of non-contributing elements of array
	cmaxsum = tsum - ncsum; // Maximum Circular Subarray Sum
	if(kmaxsum>=cmaxsum){maxsum=kmaxsum;} // Comparing Non-Circular and Circular Maximum Subarray Sum to obtain the overall maximum subarray Sum
	else{maxsum=cmaxsum;}
	cout<<endl;
	cout<<"Sum of Non-contributing Elements is  = "<<ncsum<<endl;
	cout<<maxsum<<" is maximum sum that can be obtained from subarrays of given array."<<endl;
	return 0;
}

int kadane(int *a,int n)
{
	int sum=0,maxsum=0;
	for(int i=0;i<n;i++)
		{
			sum +=a[i];
			if(sum<0){sum=0;}
			if(maxsum<sum){maxsum=sum;}
		}
	return maxsum;
}

