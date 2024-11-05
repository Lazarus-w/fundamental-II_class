#include<iostream>
using namespace std;
struct rectangle{
	int length;
	int width;
};
struct triangle{
	int base;
	int hight;
};
struct circle{
	const float pi=3.14;
	int radius;
};
int main(){
	char ch;
	cout<<"enter r for rectangle. \n"<<"enter t for triangle. \n"<<"enter c for circle: ";
	switch(ch){
		case 'r':
			rectangle rec1;
			cout<<"enter the length: ";
			cin>>rec1.length;  
		cout<<"enter the width: ";
		cin>>rec1.width;
		cout<<"the area is: "<<rec1.length*rec1.width;
		break;
		case 't':
			triangle tri1;
			cout<<"enter the base: ";
			cin>>tri1.base;
			cout<<"enter the hight: ";
			cin>>tri1.hight;
			cout<<"the Area is: "<<tri1.base*tri1.hight;
			break;
		case 'c':
		circle cir1;
		cout<<"enter the radius: ";
		cin>>cir1.radius;
		cout<<"the area is: "<<cir1.pi*cir1.radius;
		break;	
	}
	
	return 0;
}
