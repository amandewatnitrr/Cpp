#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void uniqchar(string,int,int);

 int main()
 {
	 string a;
     getline(cin,a);
     uniqchar(a,0,a.length());
 }

 void uniqchar(string a,int i,int k)
 {
     if(i==0){cout<<a[i];}
     else if(i==k){return;}
     else if(a[i]==a[i-1]){}
     else{cout<<a[i];}
     i++;
     uniqchar(a,i,k);
 }