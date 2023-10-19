// 1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.
#include<iostream>
using namespace std;
class student{
	private:int rollno,mark1,mark2,mark3;
	         float total;
	    
	public:
			void acceptinfo(){
				cout<<"enter a roll no"<<endl;
				cin>>rollno;
				cout<<"enter a mark1,mark2,mark3"<<endl;
				cin>>mark1;
				cin>>mark2;
				cin>>mark3;
				total =mark1+mark2+mark3;
				cout<<"total"<<total<<endl;
					}
			
	        void display(){
	        	cout<<"roll no "<<rollno<<endl;
	        	cout<<"mark1  "<<mark1<<endl;
	        	cout<<"mark2  "<<mark2<<endl;
	        	cout<<"mark3  "<<mark3<<endl;
	        	total=mark1+mark2+mark3;
	        	cout<<"total :"<<total;
	        	cout<<"percentage are...."<<(total/3)<<endl;
	        	if((total/3)<35){
	        		cout<<"you have failed "<<endl;
	        	}
	        	else if((total/3)<55){
	        		cout<<"you have got c+grade" <<endl;
				}
				else if((total/3)<75){
					cout<<"you have got b+ grade"<<endl;
				}else{
					cout<<"you have got a+ grade"<<endl;
				}
				}
			
};
 int main1(){
	student s1;
	s1.acceptinfo();
	s1.display();
	student s2;
	s2.acceptinfo();
	s2.display();
	
	
}
