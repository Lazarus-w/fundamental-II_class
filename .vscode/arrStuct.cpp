#include<iostream>
using namespace std;

struct student{
    int rollNUm;
    string name;
    float grade;
};
int main(){
float sum=0;
for(int i=0;i<5;i++){
struct student s[5];
cout<<"enter your rollNUm: ";
cin>>s[i].rollNUm;
cout<<"enter your name: ";
cin>>s[i].name;
cout<<"enter your grade: ";
cin>>s[i].grade;
sum=+s[i].grade;
}

double ave=sum/5;
cout<<"the average of the five student's is: "<<ave;

    return 0;
}