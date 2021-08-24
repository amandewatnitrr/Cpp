#include <bits/stdc++.h> 
#include <math.h>

/*Fibonnacci Series using Recursion.*/

using namespace std; 
int fibo(int,int,int);

int main()
{
	int n;
	cout<<"\nEnter the length of fibonnacci series you want = ";
	cin>>n;
	cout<<"\nThe fibonacci series of the given length is = ";
	int temp =0;
	int k=0,j=1;
	cout<<"0 "<<"1 ";
	fibo(n,0,1);
	cout<<endl;
	return 0;
}

int fibo(int n,int k, int j)
{
	
	if(n==0){ return 0;}
	int temp = k + j;
	cout<<temp<<" ";
	fibo(n-1,j,temp);
	return 0;
}
