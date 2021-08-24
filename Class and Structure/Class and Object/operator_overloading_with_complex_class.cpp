#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

class complex
    {
        private:
        int r;
        int i;

        public:

        void feedinfo();
        void showinfo();

        complex operator + (complex &obj) /* This is an example of operator overloading for classes.*/
            {
                complex result;
                result.r = r + obj.r;
                result.i = i + obj.i;
                return result;
            }

    };


void complex::feedinfo() 
            {
                cin>>r;
                cin>>i;
            }

void complex::showinfo() 
            {
                cout<<r<<" + "<<i<<"i";
            }

int main()
    {
        complex a,b;
        a.feedinfo();
        b.feedinfo();
        complex c = a + b;
        c.showinfo();

        return 0;        
    }
