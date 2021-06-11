#include <iostream>
#include <array>
#include <tuple>

using namespace std;
#define MAX 50
void spiraloutput(int [][MAX],int,int);

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
	cout<<"\nThe Values in the array are --> \n";
	spiraloutput(a,r,c);
	return 0;
}

void spiraloutput(int a[][MAX],int r,int c)
{
	int rs=0;
	int cs=0;
	int re=r-1;
	int ce=c-1;
	while(rs<=re && cs<=ce)
		{
			for(int col=cs;col<=ce;col++){cout<<a[rs][col]<<" ";}
			rs++;
			for(int row=rs;row<=re;row++){cout<<a[row][ce]<<" ";}
			ce--;
			for(int col=ce;col>=cs;col--){cout<<a[re][col]<<" ";}
			re--;
			for(int row=re;row>=rs;row--){cout<<a[row][cs]<<" ";}
			cs++;
		}
}

