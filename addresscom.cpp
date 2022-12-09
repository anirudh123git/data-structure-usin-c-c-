//Address computation of one dimensional array......
#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
int*p=&a[0];
cout<<p<<endl;
int*q;
int i;

for(i=0;i<5;i++){
q=p+i*sizeof(int);
cout<<"address of element at "<<" "<<i<<" index  "<<q<<endl;
cout<<"original address of element at "<<" "<<i<<" index  "<<&a[i]<<endl;

}



return 0;
}