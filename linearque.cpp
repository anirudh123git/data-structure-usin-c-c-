#include<iostream>
using namespace std;
struct que{
int a[10];
int f;
int r;



}q;

void initialize(){

q.f=-1;
q.r=-1;


}
/*********************************************************************************************/
bool isempty(){
if(q.f==q.r==-1){
    return true;

}
return false;



}
/*********************************************************************************************/
void enque(int x){
if(q.f==-1 && q.r==-1){
    q.f=0;
    q.r=0;
    q.a[q.r]=x;
}
else if(q.r==9){ 
    cout<<"queue is full";
    return;
}

else{

q.r++;
q.a[q.r]=x;

}

}
/*********************************************************************************************/
void deque(){
if(isempty()){
    cout<<"queue is empty";
    return;
}
else{
int item=q.a[q.f];
q.f++;
cout<<"deleted element is:"<<item<<endl;


}



}
/*********************************************************************************************/
int main(){
while(1){
int ch;
int y;


cout<<"1.Insert"<<endl;
cout<<"2.Delete"<<endl;
cout<<"3Checkempty"<<endl;
cout<<"enter your choice:"<<endl;
cin>>ch;
switch(ch){

case 1:
   cout<<"enter element to insert";
   cin>>y;
   enque(y);
   break;
case 2:
   deque();
   break;
case 3:
   if(isempty()){
    cout<<"queue is empty";
   }
   else{
    cout<<"queue is full";
   }
   break;
default:
   cout<<"invaild"<<endl;


}






}



return 0;
}