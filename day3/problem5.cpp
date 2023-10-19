//Create a class Point with data members as x,y. Add AcceptPoint and  add the display function. Create the object of this 
//class in main method and invoke all the methods in that class. 
#include<iostream>
using namespace std;
class point{
          private:double x,y;
          public:
          	void acceptinfo(){
          	cout << "Enter the x-coordinate: ";
            cin >> x;
            cout << "Enter the y-coordinate: ";
             cin >> y;

			  }
			  void display(){
			  	 cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
			  
	
};
int main5(){
point p1;
p1.acceptinfo();
p1.display();
}
