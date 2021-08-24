#include <bits/stdc++.h> 
#include <math.h>

/* Print no. in aescending and descending order using recursion.
 * */

using namespace std; 
void printdesc(int n);
void printaesc(int ,int);

int  main()
{
	int n;
	cout<<"\nEnter the number till which you want all numbers to be printed  = ";
	cin>>n;	
	cout<<"\nThe descending order are as follows --> \n";
	printdesc(n);
	cout<<"\nThe aescending order are as follows --> \n";
	printaesc(n,n);
	cout<<endl;
	return 0;
}

void printdesc(int n)
{
	if(n==0)
		{
			cout<<"0 ";
			return;
		}
	cout<<n<<" ";
	printdesc(n-1);
}

void printaesc(int n,int i)
{
	if(n-i==n+1)
	{return;}
	cout<<n-i<<" ";
	printaesc(n,--i);
}
