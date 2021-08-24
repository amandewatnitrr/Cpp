#include<iostream>
#include<conio.h>
#include<process.h>
#include<string.h>
#define max 80
using namespace std;

int main()
{
	char m[max],s[max];
	int n,len;
	cout<<"\nEnter the main String --> \n";
	cin.getline(m,max);
	cout<<"\nEnter the start point for string --> ";
	cin>>n;
	if(n>strlen(m))
		{
			cout<<"\nWrong Start Point in feed!! ";
			exit(0);
		}
	cout<<"\nEnter the length of the sub-string --> ";
	cin>>len;	
	if(n>strlen(m))
		{
			cout<<"\nWrong Start Point in feed!! ";
			exit(0);
		}	
	if(n<=0)
		{cout<<"\nExtracted String is empty";}
	else if(n+len-1>strlen(m))
		{
			cout<<"\nString size exceeding the limit";
			len = len-n;
		}		
	else	
		{
			cout<<"\nNum = "<<len;
		}	
	int j=0;
	for(int k=--n;k<=n+len;++k)
		{
			s[j]=m[k];
			j++;
		}	
	cout<<"\nSubstring = ";
	cout.write(s,j);	
	return 0;
}
