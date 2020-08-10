#include <iostream>
#include <math.h>
using namespace std;

int main() {
	system ("color 0a");
	float x1,x2,x3,x4,y1,y2,y3,y4;
	cout<<"Enter the coordinates of first vertex : \n";
	cin>>x1>>y1;
	cout<<"Enter the coordinates of second vertex : \n";
	cin>>x2>>y2;
	cout<<"Enter the coordinates of the third point : \n";
	cin>>x3>>y3;
	cout<<"Enter the coordinates of the fourth point : \n";
	cin>>x4>>y4;
	int x5,y5;
	cout<<"Enter the coordinates of the point : \n";
	cin>>x5>>y5;
	float c=(x5*(y1-y2))+ (x1*(y2-y5)) + (x2*(y5-y1));
	double d= abs(0.5 * c);
	
	
	float a=(x5*(y2-y3))+ (x2*(y3-y5)) + (x3*(y5-y2));
	double b= abs(0.5 * a);
	
	float e=(x5*(y3-y4))+ (x3*(y4-y5)) + (x4*(y5-y3));
	double f= abs(0.5 * e);
	
	float g=(x5*(y4-y1))+ (x4*(y1-y5)) + (x1*(y5-y4));
	double h= abs(0.5 * g);
	
	double sum= d+b+f+h;
	
	float i=(x1*(y2-y3))+ (x2*(y3-y1)) + (x3*(y1-y2));
	double sumi= abs(0.5 * i);
	
	
	float j=(x3*(y4-y1))+ (x4*(y1-y3)) + (x1*(y3-y4));
	double sumj= abs(0.5 * j);
	
     
     if (sum=sumi+sumj)
     {
     	cout<<"The point lies inside or on the parallelogram \n";
	 }
	 else 
	 {
	 	cout<<"The point lies outside \n";
	 }
	
	system ("pause");
	return 0;
}
