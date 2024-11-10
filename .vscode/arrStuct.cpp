#include<iostream>
using namespace std;
struct student{
    string name;
    int rollNUm;
    float grade;
};
int main(){
int sum=0;
struct student stu[5];
for(int i=0;i<5;i++){

cout<<"enter your name: ";
cin>>stu[i].name;
cout<<"enter your rollNUm: ";
cin>>stu[i].rollNUm;
cout<<"enter your grade: ";
cin>>stu[i].grade;
sum=+stu[i].grade;


}
float ave=sum/5;

cout<<"the average of the five student's is: "<<ave;

    return 0;
}