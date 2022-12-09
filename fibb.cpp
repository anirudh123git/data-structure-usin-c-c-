#include<iostream>
using namespace std;
long long int dat[101];
long long int  fib(int n){
if(n==1|| n==2)
    dat[n]=n-1;
else{

if(dat[n]==0){
    dat[n]=fib(n-1)+fib(n-2);        


}

}
return dat[n];


}
int main(){
for(int i=1;i<=100;i++){

cout<<fib(i)<<"  ";

}


return 0;
}