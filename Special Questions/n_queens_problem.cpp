#include <iostream>

#define MAX 50
using namespace std;

bool solun(int **,int,int);
bool issafe(int **,int,int,int);
void printsol(int **,int n);

int main()
 {
	 int n;
	 cin>>n;
	 
	 int **a = new int*[n];
	 for(int i=0;i<n;i++)
		{
			a[i] = new int[n];
			for(int j=0;j<n;j++)
				{
					a[i][j]=0;
				}
		}
	// int a[n][n]; short way to define array
	//memset(a,0,sizeof(a));
	if(!solun(a,0,n))
			{
				cout<<"\nSolution no found";
				return 0;
			}
	printsol(a,n);
	
	 return 0;
 }
 
 void printsol(int **ar,int n){
	 for(int i=0;i<n;i++){
		 for(int j=0;j<n;j++){
			 cout << ar[i][j] << " ";
		 }
		 cout << "\n";
	 }
 }
 bool solun(int **ar, int c,int n)
	{
		if(c>=n)
			{
				// printsol(ar,n);
				return true;
			}
			
		for(int i=0;i<n;i++)
			{
				if(issafe(ar,i,c,n))
					{
						ar[i][c]=1;
						if(solun(ar,c+1,n)){return true;}
						ar[i][c]=0;
					}
			}
		return false;
	}
	
bool issafe(int **a,int i, int j,int n)
	// correction in check 
	{
		for(int k=i-1;k>=0;k--){
			if(a[k][j]==1){
				return false;
			}
		}
		for(int k=j-1;k>=0;k--){
			if(a[i][k]==1){
				return false;
			}
		}
		for(int k=i-1,l=j-1;k>=0&&l>=0;k--,l--){
			if(a[k][l]==1){
				return false;
			}
		}
		for(int k=i+1,l=j-1;k<n&&l>=0;k++,l--){
			if(a[k][l]==1){
				return false;
			}
		}
		for(int k=i-1,l=j+1;k>=0&&l<n;k--,l++){
			if(a[k][l]==1){
				return false;
			}
		}
			
		return true;
	}
