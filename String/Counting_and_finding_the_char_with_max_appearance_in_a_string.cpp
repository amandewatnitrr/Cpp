#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
	string str;
	cout<<"\nEnter the string --> ";
	getline(cin,str);
	char maxc='a';
	int count=0,max=0;
	for(int i=97;i<=123;i++)
		{
			count = 0;
			for(int j=0;j<str.length();j++)
				{
					if(str[j]==(char)i)
						{
							count++;
						}
					if(count>max)
						{
							max=count;
							maxc = (char)i;
						}
				}
		}
	cout<<"\nThe character that appeared most of the time is "<<maxc<<" and it appeared "<<max<<" times.\n";
	return 0;
}
