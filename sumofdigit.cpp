#include<iostream>
int sumdigit(int n){
if(n==0){
    return 0;


}
int sum=0;
int re=n%10;
sum+=re+sumdigit(n/10);

return sum;


}
using namespace std;
int main(){
int a=111;
cout<<sumdigit(a);
return 0;
}