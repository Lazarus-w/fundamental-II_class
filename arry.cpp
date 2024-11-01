#include<iostream>
using namespace std;
int main(){

int inAr[2][2]={{1,2},{3,4}};
int inAr1[2][2]={{5,6},{7,8}};
int sum[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
          sum[i][j]=inAr[i][j]+inAr1[i][j];
          cout<<sum[i][j];
          cout<<endl;
    }
}

    return 0;
}