#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#define max 8
using namespace std;

void subtract(float [][max], float [][max],int,int);

int main()
{
	int rsize1,rsize2,csize1,csize2;
	float a[max][max],b[max][max];
	char c;
	cout<<"\nEnter Row and Column size of 2D matrice A --> ";
	cin>>rsize1>>csize1;
	cout<<"\nEnter Row and Column size of 2D matrice B --> ";
	cin>>rsize2>>csize2;
	system("CLS");
	cout<<"\nEnter values in Matrice A of "<<rsize1<<"*"<<csize1<<" --> ";
	for(int i=0;i<rsize1;i++)
		{
			for(int j=0;j<csize1;j++)
				{
					cin>>a[i][j];
				}
		}
	cout<<"\nEnter values in Matrice A of "<<rsize2<<"*"<<csize2<<" --> ";
	for(int i=0;i<rsize2;i++)
		{
			for(int j=0;j<csize2;j++)
				{
					cin>>b[i][j];
				}
		}	
	cout<<"\n";
	if((rsize1==rsize2)&&(csize1==csize2)){subtract(a,b,rsize1,csize1);}
	return 0;
}

void subtract(float a[][max],float b[][max], int rsize, int csize)
{
	float t[max][max];
	cout<<"\nA + B = \n";
	cout<<"\nRow Size = "<<rsize<<" and Column Size = "<<csize<<endl;
	for(int i=0;i<rsize;i++)
		{
			for(int j=0;j<csize;j++)
				{
					t[i][j] = a[i][j] - b[i][j];
					cout<<t[i][j]<<" ";
				}
			cout<<endl;	
		}
}
