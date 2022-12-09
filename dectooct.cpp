#include<bits/stdc++.h>
using namespace std;
# define size 50
int stk[size];
int top=-1;
bool isempty(){
return top == -1;
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
   int item=stk[top];
   top--;
   cout<<item;


}






}
void dectooct(int n){

while(n!=0){

int r=n%8;
push(r);
n=n/8;


}
while(!isempty())
{
    
pop();

}








}

int main(){
int n;
cout<<"enter decimal number:"<<endl;
cin>>n;
cout<<"Octal is:"<<endl;
dectooct(n);

return 0;
}
