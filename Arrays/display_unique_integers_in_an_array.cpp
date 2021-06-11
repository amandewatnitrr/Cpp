// C++ program to print all distinct elements in a given array 
#include <bits/stdc++.h> 
using namespace std; 

void printDistinct(int arr[], int n) 
{ 
	// First sort the array so that all occurrences become consecutive 
	sort(arr, arr + n); 

	// Traverse the sorted array 
	for (int i=0; i<n; i++) 
	{ 
	// Move the index ahead while there are duplicates 
	while (i < n-1 && (arr[i] == arr[i+1] || ( (i>0) && (arr[i]==arr[i-1]) )) )
		i++; 
	// print last occurrence of the current element 
	cout << arr[i] << " "; 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	int k;
  	cin>>k;
  	cout<<endl;
  	int arr[k];
  	for(int i=0;i<k;i++){cin>>arr[i];}
	int n = sizeof(arr)/sizeof(arr[0]); 
	printDistinct(arr, n); 
	return 0; 
} 


