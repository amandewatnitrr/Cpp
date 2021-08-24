#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

class base
    {
        public:
        
        virtual void print() 
            { //The keyword virtual enforces the binding of the pointer to the function of child class during run-time.
                cout<<"This is the print function of base class"<<endl;
            }
        
        void display()
            {
                cout<<"This is the display function of base class"<<endl;
            }

    };

class child: public base
    {
        public:
        
        void print()
            {
                cout<<"This is the print function of child class"<<endl;
            }
        
        void display()
            {
                cout<<"This is the display function of child class"<<endl;
            }

    };


int main()
    {
        /* The fact here is that even after assigning the
         * address of the child class to the base class pointer, the functions of base class are being executed.
         * In order to change the form we need to make the functions virtual so that, the function of child class gets executed.
         * So, the pointer is being bind with the print function of child class dybanically.
         */
        child c;
        base *baseptr;
        baseptr = &c;

        baseptr->print();
        baseptr->display();
        return 0;
    }
