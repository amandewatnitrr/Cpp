#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void subsetstring(string,int);
/*
 * Creating Sub-string of a string is similar to creating subset of a set.
 * The concept still remain the same but here we are using recursion for this purpose.
 * The recurrsive call of the function acts as an iterator only for the i.
 */

 int main()
 {
	 string a;
     getline(cin,a);
     subsetstring(a,0);
 }

 void subsetstring(string a,int i)
 {
     if(i<=(1<<a.size()))
        {
            for(int j=0;j<a.size();j++)
                {
                    if(i & (1<<j)){cout<<a[j];}
                }
            cout<<endl;
        }
     else {return;}
     subsetstring(a,i+1);
 }