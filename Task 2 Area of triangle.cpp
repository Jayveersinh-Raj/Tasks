#include <iostream>
#include <math.h>
using namespace std;

int main() {
	system ("color 0a");
	float x1,x2,x3,y1,y2,y3;
	cout<<"Enter the co-ordinates of a point : \n";
	cin>>x1>>y1;
	cout<<"Enter the co-ordinates of second point : \n";
	cin>>x2>>y2;
	cout<<"Enter the co-ordinates of the third point : \n";
	cin>>x3>>y3;
	float c=(x1*(y2-y3))+ (x2*(y3-y1)) + (x3*(y1-y2));
	double d= abs(0.5 * c);
	cout<<"The area of Triangle is : "<<d<<"\n";
	
	system ("pause");
	return 0;
}
