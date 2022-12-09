#include<bits/stdc++.h>
using namespace std;

int main(){

stack<char>stk;
char s[20];
cout<<"enetr string"<<endl;
cin>>s;
for(int i=0;s[i]!='\0';i++){
    stk.push(s[i]);
}
while(!stk.empty()){

cout<<stk.top();
stk.pop();



}





return 0;
}