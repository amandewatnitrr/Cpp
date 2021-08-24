#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define max 50
using namespace std;

int main()
{
	char str[max];
	cout<<"\nEnter the words in continuous -->\n ";
	cin.getline(str,max);
	for(int i=0;i<strlen(str);i++)
		{
			if(isalpha(str[i]))
				{
					if(i==0||str[i-1]==' ')
						{str[i]=toupper(str[i]);}
				}
	    }
	cout<<"\nThe string after editing is -->  ";
	cout.write(str,strlen(str));		
	return 0;
}
