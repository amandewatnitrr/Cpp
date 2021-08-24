#include <bits/stdc++.h> 
#include <math.h>

/*Fibonnacci Series.*/

using namespace std; 
int fibo(int);

int  main()
{
	int n;
	cout<<"\nEnter the fibonacci number position you want to see = ";
	cin>>n;
	cout<<fibo(n);
	cout<<endl;
	return 0;
}

int fibo(int n)
{
	if(n==0){return 0;}
	if(n==1){return 1;}
	return fibo(n-1) + fibo(n-2);
}
