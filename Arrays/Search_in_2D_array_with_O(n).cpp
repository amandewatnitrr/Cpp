#include <iostream>
#include <array>
#include <tuple>

using namespace std;
#define MAX 50
bool search(int [][MAX],int,int,int);

int a[MAX][MAX];

int main()
{
	int r,c;
	cout<<"\nEnter the row and column size of the array = ";
	cin>>r>>c;
	cout<<"\nEnter the values into the array --> \n";
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					cin>> a[i][j];
				}
		}
	int x;
	cout<<"\nEnter the number you are looking for --> ";
	cin>>x;
	cout<<"\nThe fact that the value "<<x<<" is found is ";
	if(search(a,r,c,x)){cout<<"True.\n";}
	else{cout<<"False.\n";}
	return 0;
}

bool search(int a[][MAX],int r,int c,int x)
{
	int n=0;
	int m=c-1;
	while(n<=r-1 && m>=0)
		{
			if(a[n][m]==x){return true;}
			if(a[n][m]>x){m--;}
			else{n++;}
		}
	return false;
}

