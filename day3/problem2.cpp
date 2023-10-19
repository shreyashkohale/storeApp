//1. Create a class Person with data members as name, age, city. 
//members. Also add accept and  display function. . Create the 
//object of this class in main method and invoke all the methods in that class. 

#include<iostream>
using namespace std;
class person{
	private: int num;
	         string name;
	         int age;
	         string city;
	public:
		void acceptinfo(){
			cout<<"enter a number"<<endl;
			cin>>num;
			cout<<"enter a name"<<endl;
			cin>>name;
			cout<<"enter a age"<<endl;
			cin>>age;
			cout<<"enter a city"<<endl;
			cin>>city;
		}
		void display(){
			cout<<" num "<<num << endl;
			cout<<"name "<< name <<endl;
			cout<<"age" << age <<endl;
			cout<<"city" << city <<endl;
			
		}
};
int main2(){
	
	person p1;
	p1.acceptinfo();
	p1.display();
	 
	person p2;
	p2.acceptinfo();
	p2.display();
	}

