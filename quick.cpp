#include<iostream>//Quick sort by anirudh
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int a[],int l,int h){

int pi=a[h];
int i=l-1;
for(int j=l;j<h;j++){
if(a[j]<=pi){
i++;
swap(&a[i],&a[j]);


}

}

swap(&a[i+1],&a[h]);

return i+1;


}
void quicksort(int a[],int l,int h){
if(l<h){
int pt=partition(a,l,h);
quicksort(a,l,pt-1);
quicksort(a,pt+1,h);

}


}
void display(int a[],int n){
for(int i=0;i<n;i++){
cout<<a[i]<<endl;

}

}
int main(){
int b[5];
cout<<"enter array:"<<endl;
for(int i=0;i<5;i++){
  cin>>b[i];
}
cout<<"Sorted Array using quick sort is:"<<endl;
quicksort(b,0,4);
display(b,5);



return 0;
}


