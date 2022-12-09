#include<bits/stdc++.h>

using namespace std;
int main(){
stack<int>stk;
vector<int>a;
stk.push(2);
stk.push(5);
stk.push(3);
stk.push(4);
stk.push(1);
stk.push(6);


while(!stk.empty()){

int x=stk.top();
a.push_back(x);
stk.pop();





}
sort(a.begin(), a.end(),greater<int>());
 for(int i=0;i<a.size();i++){
    stk.push(a[i]);
 }
cout<<"Sorted Stack is:"<<endl;
while(!stk.empty()){
    int y=stk.top();
    cout<<y<<endl;
    stk.pop();

}


return 0;
}