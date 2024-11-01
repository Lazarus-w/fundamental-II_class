#include<iostream>
using namespace std;
int main(){
int num1;
char expression;
cout<<"inter num1: ";
cin>>num1;
cout<<"\n inter an oprator(+,-,*,/): ";
cin>>expression;
int num2;
cout<<"\n inter num2: ";
cin>>num2;
switch(expression){
    case '+':
    cout<<"the result is: "<<num1+num2;
    break;
    case '-':
    cout<<"the result is: "<<num1-num2;
    break;
    case '/' :
    cout<<"the result is: "<<num1/num2;
    break;
    case '*':
    cout<<"the result is: "<<num1*num2;
    break;
}

    return 0;
}