#include <bits/stdc++.h> 
#include <math.h>

/* Check whether array is sorted or not using recursion.
 * Time Complexity in this case is O(n) and the space complexity is O(1).
 * */

using namespace std; 
int checksort(int [],int);

int  main()
{
	int n;
	
	cout<<"\nEnter the length of the arrays = ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the values into the array --> ";
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
	if(checksort(a,n)){cout<<"\nThe given array is sorted.";}
	else{cout<<"\nThe given array is not sorted.";}
	
	cout<<endl;
	return 0;
}

bool checksort(int a[], int n)
{
	for(int i=1;i<n;i++)
		{
			if(a[i-1]>a[i]){return false;}
		}
	return true;
}
