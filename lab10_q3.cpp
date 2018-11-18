//Write a program to find the area and perimeter of a rectangle using classes.

//including libraries
#include<iostream>
using namespace std;

//declaring class
class Rectangle{
	//declaring variables
	public:
	double length, breadth;
	//creating functions
	public:
	double area();
	double perimeter();
};

//writing class function area
double Rectangle::area(){
	//declaring variables
	double ar;
	//finding area of rectangle
	ar=length*breadth;
	//returning area value to main function
	return ar;
}

//writing class function perimeter
double Rectangle::perimeter(){
	//declaring variables
	double pm;
	//finding perimeter
	pm=2.0*(length+breadth);
	//returning perimeter value to main function
	return pm;
}

//declaring caller/driver function
int main(){
	//creating class objects
	Rectangle rect1;
	Rectangle rect2;
	//declaring variables
	double ar1, ar2, pm1, pm2;
	//asking user to input data of rectangle 1
	cout<<"RECTANGLE 1"<<endl;
	cout<<endl;
	cout<<"Enter length."<<endl;
	cout<<"Enter breadth."<<endl;
	//accepting value
	cin>>rect1.length;
	cin>>rect1.breadth;
	cout<<endl;
	//calling functions
	ar1=rect1.area();
	pm1=rect1.perimeter();
	//displaying results
	cout<<"Area = "<<ar1<<endl;
	cout<<"Perimeter = "<<pm1<<endl;
	cout<<endl;
	//asking user to enter details of rectangle 2
	cout<<"RECTANGLE 2"<<endl;
	cout<<endl;
	cout<<"Enter length."<<endl;
	cout<<"Enter breadth."<<endl;
	//accepting value
	cin>>rect2.length;
	cin>>rect2.breadth;
	cout<<endl;
	//calling functions
	ar2=rect2.area();
	pm2=rect2.perimeter();
	//displaying results
	cout<<"Area = "<<ar2<<endl;
	cout<<"Perimeter = "<<pm2<<endl;
	cout<<endl;
	//comparing the values of area and perimeter
	if(ar1>ar2){
		cout<<"Area of 1st rectangle is greater."<<endl;
	}
	else if(ar1<ar2){
		cout<<"Area of 2nd reactangle is greater."<<endl;
	}
	else{
		cout<<"Area of both reactangles are equal."<<endl;
	}
	cout<<endl;
	if(pm1>pm2){
		cout<<"Perimeter of 1st rectangle is greater."<<endl;
	}
	else if(pm1<pm2){
		cout<<"Perimeter of 2nd rectangle is greater."<<endl;
	}
	else{
		cout<<"Perimeter of both reactangles are equal."<<endl;
	}
	//returning integer value to main function
	return 0;
}
