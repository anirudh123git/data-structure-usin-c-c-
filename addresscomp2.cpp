#include<iostream>
//Address computation of 2D array....
using namespace std;
int main(){
int a[2][3]={{1,2,3},{4,5,6}};
int*b=&a[0][0];
int i,j;
cout<<"enter element indexes to find address:"<<endl;
cin>>i>>j;
int*p=b+(i*3+j)*sizeof(int);
cout<<"by row major:"<<p<<endl;////by row major 2D address computation

int*q=b+(i+j*2)*sizeof(int);
cout<<"by column major:"<<q<<endl;////by column major 2D address computation
cout<<"original address is:"<<&a[i][j];
return 0;
}