/*#include<iostream>
using namespace std;

struct mystructure{
    int i;
    bool b;
    std::string s;
    void test(){
        cout<<"test"<<endl;
    }
};

int main(){
struct mystructure m1;
 m1.i=23;
 m1.b=true;
 m1.s="Hellow";

cout<<m1.i<<endl;
cout<<m1.b<<endl;
cout<<m1.s<<endl;
m1.test();
    return 0;
}*/
#include<iostream>
using namespace std;
struct person{
    std::string name;
    int age;
    char gender;
    void test(){
        cout<<"name: "<<name<<" age: "<<age<<" gender: "<<gender<<endl;
        
    }
};
int main(){
 
 struct person p1;
  p1.name="alazar";
  p1.gender='M';
  p1.age=21;
    
    p1.test();
     struct person p2;
  p2.name="smret";
  p2.gender='F';
  p2.age=31;
    
    p2.test();
}