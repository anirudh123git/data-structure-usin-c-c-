#include<iostream>
using namespace std;
struct date{

int d,m,y;


};
int main(){
date d1,d2;
cout<<"enter first date:day/month/year"<<endl;
cin>>d1.d>>d1.m>>d1.y;
cout<<"enter second date:day/month/year"<<endl;
cin>>d2.d>>d2.m>>d2.y;
if(d1.d>d2.d || d1.m>d2.m || d1.y>d2.y)
             cout<<"date 1 is great:"<<endl;
else{
    cout<<"date 2 is great"<<endl;
}             



return 0;
}