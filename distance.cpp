#include<iostream>

struct distance{
int inch;
int feet;


}d1,d2,result;
int convert(struct distance d1,struct distance d2){

            



}
using namespace std;
int main(){
cout<<"enter first distance:"<<endl;
cout<<"enter inch:";
cin>>d1.inch;
cout<<"enter feet:";
cin>>d1.feet;
cout<<"enter second distance:"<<endl;
cout<<"enter inch:";
cin>>d2.inch;
cout<<"enter feet:";
cin>>d2.feet;
result.feet = d1.feet + d2.feet;
result.inch = d1.inch + d2.inch;
while(result.inch>12){
    result.inch=result.inch-12;
    ++result.feet;

}
cout<<"Result is:"<<result.feet<<"feet"<<result.inch<<"inch"<<endl;
return 0;
}