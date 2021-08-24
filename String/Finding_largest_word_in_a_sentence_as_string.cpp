#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
	string str;
	cout<<"\nEnter the value into string -->\n";
	getline(cin,str);
	int max=0,count=0,p=0;
	for(int i=0;i<str.size();i++)
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
	cout<<endl;
	return 0;
}

