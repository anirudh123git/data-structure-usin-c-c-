#include<iostream>
using namespace std;
int pow(int a,int b){

if(b==0){
    return 1;
}
return a*pow(a,b-1);

}

int main(){
int x,y;
int p=pow(2,3);
cout<<p<<endl;
return 0;
}