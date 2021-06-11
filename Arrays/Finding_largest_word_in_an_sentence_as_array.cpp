#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
void largestword(char [],int n);
int main()
{
	int n;
	cout<<"\nEnter the size of array --> ";
	cin>>n;
	cin.ignore();
	char str[n+1];
	cout<<"\nEnter the sentence -->\n";
	cin.getline(str,n);
	cin.ignore();
	cout<<endl;
	largestword(str,n);
	cout<<endl;
	return 0;
}

void largestword(char *str,int n)
{
	int max=0,count=0,p=0;
	for(int i=0;i<n;i++)
		{
			if(str[i]==' '){count=0;}
			else{count++;}
			if(max<count)
				{
					p=i-count+2;
					max=count;
				}
		}
	cout<<"\nThe largest word in sentence has length "<<max<<".";
	cout<<"The largest word is ";
	for(int i=p-1;i<p+count+1;i++)
		{
			cout<<str[i];
		}
}

