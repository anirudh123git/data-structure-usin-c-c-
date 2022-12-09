#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
int flag=1,c=0;
for(int i=0;i<n-1 && flag==1;i++){
c++;
for(int j=0;j<n-i-1;j++){
flag=0;
if(a[j]>a[j+1]){


int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
flag=1;
}



}

}
cout<<"no of iteration:"<<c<<endl;
cout<<"sorted array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}



}
/*int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum element from the array  
}  
  
void countSort(int a[], int n)  
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1];  
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; 
  }  
    
  for (int i = 0; i < n; i++)  
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1];  


  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--;
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i];   
   }  
}  
  
/*void printArr(int a[], int n) /* function to print the array */  
//{  
  //  int i;  
   // for (i = 0; i < n; i++)  
        //printf("%d ", a[i]);  
//}
  















    


int main(){
int a[5]={5,4,3,2,1};

bubble(a,5);






return 0;
}