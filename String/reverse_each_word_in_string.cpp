#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char str[100];
	char word[50];
	int k = 0;
	cout<<"\nEnter the string --> ";
	cin.getline(str,100);
	strcat(str," ");
	for(int i=0;i<strlen(str);i++)
		{
			if(str[i]!=' ')
				{
					word[k] = str[i];
					k++;
				}
			else
				{
					while(k>0)
						{cout<<word[--k];}
					cout<<str[i];	
				}		
		}
	return 0;
}
