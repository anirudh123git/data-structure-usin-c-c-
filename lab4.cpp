#include<bits/stdc++.h>
using namespace std;
int lsearch(int a[],int,int);
int bsearch(int a[],int l,int h,int x);
int tsearch(int a[],int l,int h,int x);

int main(){
int a[5];
cout<<"enter array elements:"<<endl;
for(int i=0;i<5;i++){
cin>>a[i];


}
int e;
cout<<"enter element to search:"<<endl;
cin>>e;
int pos=tsearch(a,0,4,e);
if(pos>0)
     cout<<"found at index:"<<pos<<endl;
else{
  cout<<"not found"<<endl;
}


return 0;
}
int lsearch(int a[],int n,int x){
    for(int i=0;i<n;i++){
              if(a[i]==x){
                return i;
              }


    }
cout<<"element not found in list"<<endl;
return -1;


}
int bsearch(int a[],int l,int h,int x){
     

   if(l>h) return -1;

      int mid = l +(h-l)/2;

      if(a[mid] == x) return mid;
      else if(a[mid] < x) return bsearch(a,mid+1,h,x);
       return bsearch(a,l,mid-1,x);
}

int tsearch(int a[],int l,int h,int x){
while(h>=l){
int mid1=l+(h-l)/3;
int mid2=h-(h-l)/3;
if(x==a[mid1]){
  return mid1;
}
else if(x==a[mid2]){
  return mid2;
}
else if(x<a[mid1]){
  h=mid1-1;
}
else if(x>a[mid2]){
l=mid2+1;

}


}
return -1;

}







