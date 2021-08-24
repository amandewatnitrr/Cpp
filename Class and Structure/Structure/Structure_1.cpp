#include<iostream>
#include<string.h>
#define max 50
using namespace std;

struct customer
{
	int age;
	char name[max];
	long int dob;
	int id;
	int pd;
};
struct rent
{
	customer c;
	long int rent;
	int seat;
	double dor;
	float offer;
	long int carid;
};

int main()
{
	rent r;
	cout<<"\nEnter Customer Details --------------------------------------------------------";
	cout<<"\nEnter Customer Name --> ";
	cin.getline(r.c.name,max);
	cout<<"\nEnter Customer Age --> ";
	cin>>r.c.age;
	cout<<"\nEnter Custome's Date of Birth -->";
	cin>>r.c.dob;
	cout<<"\nAssign Custome ID --> ";
	cin>>r.c.id;
	cout<<"\nIs the customer Physically Disabled --> ";
	cin>>r.c.pd;
	
	system("CLS");
	cout<<"\nEnter CAR renting details ------------------------------------------------";
	cout<<"\nEnter, the no. of seater in car --> ";
	cin>>r.seat;
	if(r.seat==4)
		{
			r.rent=2500;
		}
	if(r.seat==6)
		{
			r.rent=3000;
		}
	if(r.seat==8)
		{
			r.rent=5000;
		}	
	cout<<"\nEnter the no. of days for which the car has been rented --> ";
	cin>>r.dor;
	cout<<"\nEnter Car ID --> ";
	cin>>r.carid;
	cout<<"\nEnter discount on "<<r.seat<<" seater car --> ";
	cin>>r.offer;
	if(r.c.pd)
		{
			r.offer = r.offer+20;
		}
	r.offer = r.offer/100;	
	if(r.dor>=3)
		{
			r.rent=r.rent-r.dor*0.01*r.rent;
		}	
	
		
	cout<<"\n\nCustomer Details ---------------------------------------------------------";
	cout<<"\nCustomer Name --> ";
	cout.write(r.c.name,strlen(r.c.name));
	cout<<"\nCustomer Age --> "<<r.c.age;
	cout<<"\nCustomer's Date of Birth -->"<<r.c.dob;
	cout<<"\nCustomer ID --> "<<r.c.id;
	cout<<"\nPhysically Disabled --> "<<r.c.pd;
	cout<<"\n\nRented Car Deatils ---------------------------------------------------- ";
	cout<<"\nSeaters in Car --> "<<r.seat;
	cout<<"\nNo. of days for which the car has been rented --> "<<r.dor;
	cout<<"\nDiscount on "<<r.seat<<" seater car --> "<<r.offer;
	cout<<"\nTotal Rent = "<<r.rent;
		
	return 0;
}
