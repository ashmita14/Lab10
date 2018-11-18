//including libraries
#include<iostream>
#include<math.h>
using namespace std;

//declaring class point
class point{
	//declaring variables
	private:
	float x, y;
	public:
	//declaring function to set the value of x
	void set_x(float x){
		this->x=x;
	}
	//declaring function to set the value of y
	void set_y(float y){
		this->y=y;
	}
	//declaring function to print coordinates
	void print(){
		cout<<"("<<x<<", "<<y<<")"<<endl;
	}
};

//declaring class rectangle
class rectangle{
	//declaring objects of class point
	private:
	point p1, p2, p3, p4;
	float s1, s2;
	public:
	//creating default constuctor
	rectangle(){
		//setting default values
		p1.set_x(0.0); p1.set_y(0.0); //set values of 1st coordinate 
		p2.set_x(1.0); p2.set_y(0.0); //set values of 2nd coordinate
		p3.set_x(0.0); p3.set_y(1.0); //set values of 3rd coordinate
		p4.set_x(1.0); p4.set_y(1.0); //set values of 4th coordinate
	}
	//creating constuctor which inputs parameters
	rectangle(float x1, float x2, float y1, float y2){
		//setting values
		p1.set_x(x1); p1.set_y(y1); //set values of 1st coordinate
		p2.set_x(x2); p2.set_y(y1); //set values of 2nd coordinate
		p3.set_x(x1); p3.set_y(y2); //set values of 3rd coordinate
		p4.set_x(x2); p4.set_y(y2); //set values of 4th coordinate
	}
	//creating function to print the points
	void printrect(){
		cout<<"The coordinates of the rectangle are :"<<endl;
		//printing using print function of class point
		p1.print();
		p2.print();
		p3.print();
		p4.print();
	}
	//creating private function to calculate side 1
	private:
	void side1(float x1, float x2){
		//computing side 1
		s1=x2-x1;
	}
	//creating private function to calculate side 2
	private:
	void side2(float y1, float y2){
		//computing side 2
		s2=y2-y1;
	}
	//creating public function to calculate area
	public:
	void area(float x1, float x2, float y1, float y2){
		//calling functions for calculating sides
		side1(x1, x2);
		side2(y1, y2);
		//calculating area 
		float ar=s1*s2;
		//printing value of area
		cout<<"Area = "<<ar<<endl;
	}
};

//declaring driver/caller function
int main(){
	//declaring variables
	float x1, x2, y1, y2;
	//checking class point by calling functions involved in it
	point pn;
	pn.set_x(2.0); pn.set_y(3.0);
	pn.print();
	//asking user for coordinates of two opposite points of a rectangle
	cout<<endl;
	cout<<"Define a rectangle."<<endl;
	cout<<endl;
	cout<<"1st Point."<<endl;
	cout<<"Enter x and y coordinates respectively."<<endl;
	//accepting value
	cin>>x1>>y1;
	cout<<endl;
	cout<<"Opposite point."<<endl;
	cout<<"Enter x and y coordinates respectively."<<endl;
	//accepting values
	cin>>x2>>y2;
	cout<<endl;
	//declaring objects of class rectangle
	rectangle r1, r2(x1, x2, y1, y2);
	//printing information regarding default rectangle
	cout<<"DEFAULT RECTANGLE."<<endl;
	//printing coordinates
	r1.printrect();
	//calucating sides and area
	r1.area(0.0, 1.0, 0.0, 1.0);
	//printing information regarding user defined rectangle
	cout<<endl;
	cout<<"USER DEFINED RECTANGLE."<<endl;
	//printing variables
	r2.printrect();
	//calculating sides and area
	r2.area(x1, x2, y1, y2);
	//returning integer value to main function
	return 0;
}
	

		
