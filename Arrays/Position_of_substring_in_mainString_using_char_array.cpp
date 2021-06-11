#include<iostream>
#include<string.h>
#define max 80
using namespace std;

int main()
{
	char str[max],sstr[max];
	cout<<"\nEnter the main String --> \n";
	gets(str);
	cout<<"\n";
	cout<"\nEnter the sub-string you are looking for --> ";
	gets(sstr);
	int k,t,n,d=0;
	for(int i=0;i<strlen(str);i++)
		{
			if(str[i]==sstr[0])
				{
					k = 0;
					t = i;
					while(str[i]==sstr[k])
						{
							t++;
							k++;
						}
					if(k>=strlen(sstr))
						{
							d==1;
							break;
						}	
				}
		}
	if(d==0){cout<<"\nString Not found...";}
	else{cout<<"\nString Found";}
	return 0;
}
