#include<bits/stdc++.h>
using namespace std;
# define size 50
int stk[size];
int top=-1;
bool isempty(){
if(top==-1){
    return true;
}
return false;



}
void push(int x){
  if(top==size-1){
    cout<<"stack overflow"<<endl;
    return;
  }
  else{
       top++;
       stk[top]=x;
       
  }




}
void pop(){


if(isempty()){
    cout<<"stack underflow"<<endl;
    return;
}
else{
   char item=stk[top];
   top--;
   cout<<item;


}






}











int main(){
char s[20];
cout<<"enter string:"<<endl;
cin>>s;
for(int i=0;s[i]!='\0';i++){

push(s[i]);



}
while(!isempty()){


pop();


}





}
