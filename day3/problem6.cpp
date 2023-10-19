//Create a class ComplexNumber with data members real, imaginary. Create  AcceptComplexNumber() and the display function. 
//Create the object of this class in main method and invoke all the methods in that class.
#include<iostream>
using namespace std;
class complexnumber{private:int realno;
                             double imaginary;
                   public:
                   	void acceptcomplexnumber(){
                   		
                   		cout<<"enter a real no"<<endl;
						   cin>>realno;
						   cout<<"enter a imaginary no "<<endl;
						   cin>>imaginary;
						               		
					   }
	              void display(){
	              	cout<<"(" <<realno <<","<<imaginary <<")"<<endl;
				  }
};
int main(){
	complexnumber cn;
	cn.acceptcomplexnumber();
	cn.display();
}
