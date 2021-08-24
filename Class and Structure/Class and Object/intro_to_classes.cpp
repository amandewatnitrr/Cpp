#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

class student
    {
        string name;
        int age;
        int gender;

        public: /* Functions that are accessible by the object of the class*/

        student() /*Default Constructor*/
            {
                name = "null";
                age = 0;
                gender = 0;
            }

        void feedinfo();
        void showinfo();
            
            /* now we have 2 objects of student class we can compare them with "a==b" this will return boolean value. 
             * The case below is an example of operator overloading, cause we are manipulating the operator to behave in a particular manner for the object.
             * and we will pass the object as parameter with which we want to conmpare.
             */

        bool operator == (student &a) 
            {
                if(name == a.name && age == a.age && gender == a.gender){ return true; }
                return false;
            }

    };


void student::feedinfo() 
            {
                cin.ignore();
                getline(cin,name);
                cin>>age;
                cin>>gender;
            }

void student::showinfo()
            {
                cout<<name<<endl;
                cout<<age<<endl;
                cout<<gender<<endl;
            }

int main()
    {
        int n;
        cin>>n;
        student *a = new student[n];
        for(int i=0;i<n;i++)
            {
                a[i].feedinfo();
            }
        for(int i=0;i<n;i++)
            {
                if(i>=1 && a[i]==a[i-1])
                    {
                        cout<<"duplicate objects found at "<<i+1<<endl;
                        continue;
                    }
                a[i].showinfo();
                cout<<endl;
            }
        return 0;
    }
