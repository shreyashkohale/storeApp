//Create a class Book with data members as bname,id,author,price. Write AcceptBook function . Also add the display function. Create Default and Parameterized constructors. Create 
// craete default and paranthesis constructor the object of this class in main method and invoke all the methods in that class. 
#include<iostream>
using namespace std;
class book{
	private:string bname;
	        int id;
	        string author;
	        double price;
	public: book(){
		cout<<"....default constructor..."<<endl;
		this->bname="rich dad poor dad";
		this->id=101;
		this->author="shreyash";
		this->price=1001;
	}
	book(string name, int id,string author,double price){
		cout<<"....parenthesis constructor...."<<endl;
		this->bname=bname;
		this->id=id;
		this->author=author;
		this->price=price;
	}
	        void acceptinfo(){
	    cout << "Enter book id: ";
        cin >> id;
        // To consume the newline character left in the input buffer
        cout << "Enter name: ";
        cin>>bname;
        cout << "Enter Author: ";
        cin>>author;
        cout << "Enter price: ";
        cin >> price;
    }
    void display(){
    	 cout << "The book name is: " << bname << endl;
        cout << "The book id is: " << id << endl;
        cout << "The author is: " << author << endl;
        cout << "The price is: " << price << endl;
	}
};
int main4(){
	book b1;
	
	b1.display();
	book b2("bagwat",100,"ram",150);
	b2.display();

	
}

