#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char str1[25],str2[25],str3[50];
	cout<<"\nEnter Values in String 1 -->\n";
	cin.getline(str1,25);
	cout<<"\nEnter Values in String 2 -->\n";
	cin.getline(str2,25);
	int t;
	for(int i=0;i<strlen(str1);i++)
		{
			str3[i] = str1[i];
			t=i;
		}
		str3[t+1]=' ';
	for(int i=0,k=t+2;i<strlen(str2);k++,i++)
		{
			str3[k]=str2[i];
		}	
	cout<<"\nString 3 --> \n";	
	cout.write(str3,strlen(str3)-1);	
	return 0;
}
