#include<bits/stdc++.h>
//Anirudh Sharma CSE A 2100320100026
using namespace std;
struct student{
int roll,age;
char name[20];
char address[50];
};
void  displayeven(student s){
if(s.roll%2==0){
    cout<<s.name<<endl;
}
else{
    cout<<"not an even roll no"<<endl;
    return ;
}



}
void search(student s[],int n,int r){
for(int i=0;i<n;i++){
    if(s[i].roll==r){
        cout<<s[i].name<<""<<s[i].age<<""<<s[i].address<<endl;
    }
}




}
int main(){
int n;
cout<<"enter no. of students:"<<endl;
cin>>n; int r;
student s[n];
for(int i=0;i<n;i++){
cout<<"enter details of student:"<<i+1<<endl;
cout<<"enter rollno."<<endl;
cin>>s[i].roll;
cout<<"enter name:"<<endl;
cin>>s[i].name;
cout<<"enter age: between 11 and 14"<<endl;
cin>>s[i].age;
cout<<"enter address:"<<endl;
cin.ignore();
cin.getline(s[i].address,50);


}
cout<<"enter roll no. to searh";
cin>>r;
search(s,n,r);


return 0;
}