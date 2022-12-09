#include<iostream>
using namespace std;
struct student{

   int roll;
   char name[20];
   int age;
   int marks;




};
int main(){
int n;
cout<<"enter no. of students:"<<endl;
cin>>n;
student s[n];
for (int  i = 0; i < n; i++)
{  cout<<"enter details of student "<<i+1<<endl;
   cout<<"enter roll no:"<<endl;
   cin>>s[i].roll;
   cout<<"enter name"<<endl;
   cin>>s[i].name;
    cout<<"enter age"<<endl;
   cin>>s[i].age;
    cout<<"enter marks"<<endl;
   cin>>s[i].marks;

    
}
int m;
cout<<"enter no. of students to display details"<<endl;
cin>>m;
for(int i=0;i<m;i++){
cout<<"details of student "<<i+1<<endl;
cout<<" "<<s[i].roll<<" "<<s[i].name<<" "<<s[i].marks<<" "<<s[i].age<<endl;



}


return 0;
}