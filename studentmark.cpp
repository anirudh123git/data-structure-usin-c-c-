#include<iostream>
using namespace std;

struct studentmark{

int roll;
int physics_mark;
int chem_mark;
int math_mark;







};
int main(){
int n;
cout<<"enter no. of students:"<<endl;
cin>>n;
studentmark a[n];
for(int i=0;i<n;i++){
    cout<<"enter details of students:"<<i+1<<endl;
    cout<<"enter roll no;"<<endl;
    cin>>a[i].roll;
    cout<<"enter marks in physics:"<<endl;
    cin>>a[i].physics_mark;
    cout<<"enter marks in chemistry:"<<endl;
    cin>>a[i].chem_mark;
    cout<<"enter marks in maths:"<<endl;
    cin>>a[i].math_mark;
    cout<<"percentage is:"<<(a[i].physics_mark+a[i].chem_mark+a[i].math_mark)/3<<"%"<<endl;

}






return 0;
}