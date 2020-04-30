#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#define max 8
using namespace std;

void add(float [][max], float [][max],int,int);
void subtract(float [][max], float [][max],int,int);
void transpose(float [][max], float [][max],int,int);
void multiply(float[][max],float[][max],int,int,int);
int rsize1,csize1,rsize2,csize2;

int main()
{
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
	cout<<"\nEnter the operation you want to perform --> \n1. + for A + B\n2. - for A - B\n3. t for Transpose \n4. * for multiply -->";
	cin>>c;
	system("CLS");
	if(c=='+')
		{
			if(rsize1==rsize2 && csize1==csize2)
				{add(a,b,rsize1,csize1);}
		}
  else if(c=='-')
		{
			if(rsize1==rsize2 && csize1==csize2)
				{subtract(a,b,rsize1,csize1);}
		}	
	else if(c=='t')
		{
			cout<<"\nEnter matrix whose transpose you want = ";
			cin>>c;
			if(c=='a'){transpose(a,b,rsize1,csize1);}
			if(c=='b'){transpose(b,a,rsize2,csize2);}	
		}
	else if(c=='*')
		{
			cout<<"\nEnter matrix type of matrix multiplication you want \na for A * B \nb for B * A = ";
			cin>>c;
			if((c=='a')&&(csize1==rsize2))
				{multiply(a,b,rsize1,csize1,csize2);}
			else if((c=='b')&&(csize2==rsize1))
				{multiply(b,a,rsize2,csize2,csize1);}	
			else{cout<<"\nMatix Multiplication, Not Possible..";}
		}	
	else{cout<<"\nIncorrect Inputs...";}
	
	
	return 0;
}


void add(float a[][max],float b[][max], int rsize, int csize)
{
	float t[max][max];
	cout<<"\nA + B = \n";
	cout<<"\nRow Size = "<<rsize<<" and Column Size = "<<csize<<endl;
	for(int i=0;i<rsize;i++)
		{
			for(int j=0;j<csize;j++)
				{
					t[i][j] = a[i][j] + b[i][j];
					cout<<t[i][j]<<" ";
				}
			cout<<endl;	
		}
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

void transpose(float a[][max],float b[][max],int rsize, int csize)
{
	float t[max][max];
	cout<<"\nThe Transposed Matrix is = \n";
	for(int i=0;i<rsize;i++)
		{
			for(int j=0;j<csize;j++)
				{
					b[i][j]=a[j][i];
					cout<<b[i][j]<<" ";
				}
			cout<<endl;	
		}
}

void multiply(float a[][max],float b[][max],int rsize1,int csize1,int csize2)
{
	cout<<endl;
	float t[max][max];
	for(int i=0;i<rsize1;i++)
		{
			for(int j=0;j<csize2;j++)
				{
					t[i][j]=0;
					for(int k=0;k<csize1;k++)
						{
							t[i][j] = a[i][k] * b[k][j] + t[i][j];
							cout<<t[i][j]<<" ";
						}	
					cout<<endl;	
				}	
		}
		
}

