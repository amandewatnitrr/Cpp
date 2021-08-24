#include <fstream>
#include<iostream>

using namespace std;

int main()
{
	int roll, marks;
	ofstream fout("filename.dat",ios::out);
	char c = 'y';
	while(c == 'y' || c== 'Y')
		{
			cout<<"\n Enter Roll no. --> ";
			cin>>roll;
			cout<<"\n Enter Total Marks = ";
			cin>> marks;
			fout<<roll<<"->"<<marks<<"\n";
			cout<<"\n Do you wish to continue ? --> ";
			cin>>c;
		}
	fout.close();	
	return 0;
}
