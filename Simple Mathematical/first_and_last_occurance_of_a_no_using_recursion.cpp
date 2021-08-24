#include <bits/stdc++.h> 
#include <math.h>

/* Print the first and last occurance a no. in arrray using recusrsion.
 * */

using namespace std; 
int occur(int[],int,int,int);

int  main()
{
	int n,k;
	cout<<"\nEnter the size of the array  = ";
	cin>>n;	
	int a[n];
	cout<<"\nEnter the values into the array --> ";
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	cout<<"\nEnter the no. you are looking for = ";
	cin>>k;
	if(occur(a,n,k,0))
		{
			cout<<"\n"<<k<<" found at "<<occur(a,n,k,0)-1<<" and "<<occur(a,n,k,occur(a,n,k,0))-1;
		}
	cout<<endl;
	return 0;
}

int occur(int a[],int s,int k,int i)
{
	if(i==s){return -1;}
	if(a[i]==k){return i+1;}
	return occur(a,s,k,++i)+1;
}
