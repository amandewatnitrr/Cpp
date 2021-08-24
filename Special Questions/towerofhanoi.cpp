#include <iostream>
using namespace std;

void towerofhanoi(int, char, char, char);

 int main()
 {
	 towerofhanoi(3,'A','C','B');
 }

 void towerofhanoi(int n, char s, char d, char h)
 {

     if(n==0)
        {
            return;
        }

     towerofhanoi(n-1,s,h,d);
     cout<<"Move from "<<s<<" to "<<d<<endl;
     towerofhanoi(n-1,h,d,s);
 }
