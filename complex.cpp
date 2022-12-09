#include<iostream>
using namespace std;
struct complex{
int real;
int img;


}c1,c2,result;
int main(){
cout<<"enter first complex number"<<endl;
cout<<"enter real part"<<endl;
cin>>c1.real;
cout<<"enter imaginary part"<<endl;
cin>>c1.img;
cout<<"enter second complex number"<<endl;
cout<<"enter real part"<<endl;
cin>>c2.real;
cout<<"enter imaginary part"<<endl;
cin>>c2.img;
result.real=c1.real+c2.real;
result.img=c1.img+c2.img;
cout<<"Sum is:"<<result.real<<"+"<<result.img<<"i"<<endl;



return 0;
}