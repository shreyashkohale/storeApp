// Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also add the display function. Create the 
//object of this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class date{
	private:int dd,mm,yy;
	public:
		void acceptinfo(){
			cout<<"enter the day"<<endl;
			cin>>dd;
			cout<<"enter the month"<<endl;
			cin>>mm;
			cout<<"enter a year"<<endl;
			cin>>yy;
				}
		void display(){
			cout<<"the date is :"<< dd <<endl;
			cout<<"the month is :" <<  mm <<endl;
			cout<<"the year is :" << yy<<endl;
			
		}
};
int main3(){
	date d1;
	d1.acceptinfo();
	d1.display();
	date d2;
	d2.acceptinfo();
	d2.display();
	
}
