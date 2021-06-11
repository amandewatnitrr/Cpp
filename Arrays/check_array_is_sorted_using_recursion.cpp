#include <bits/stdc++.h> 
#include <math.h>

/*Check whether array is sorted or not using recursion.
 * Time Complexity in this case is O(n) and the space complexity is also same.
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

int checksort(int a[], int n)
{
	if(n==0 || n==1)
		{return 1;}
	
	if(a[n-1] < a[n-2]){return 0;}
	
	return checksort(a,n-1);
}
