#include<iostream>
using namespace std;
struct student{
    string name;
    int rollNUm;
    float grade;
};
int main(){
int sum=0;
for(int i=0;i<5;i++){
struct student stu[5];
cout<<"enter your name: ";
cin>>stu[i].name;
cout<<"enter your rollNUm: ";
cin>>stu[i].rollNUm;
cout<<"enter your grade: ";
cin>>stu[i].grade;
sum=+stu[i].grade;
}

cout<<"the average of the five student's is: "<<sum/5;

    return 0;
}