#include<iostream>
using namespace std;
//void multiply(int a[][3],int m,int n,int b[][3],int p,int q);
int determinant( int matrix[][3]) ;
void transpose(int a[][3],int m,int n);
int main(){
int a[3][3], b[3][3];
cout<<"enter elements of first matrix:"<<endl;
for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        cin>>a[i][j];
       }


}
/*cout<<"enter elements of second  matrix:"<<endl;
for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        cin>>b[i][j];
       }
*/
transpose(a,3,3);


/*cout<<"addition is:"<<endl;
for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        cout<<a[i][j]+b[i][j]<<" ";
       }
       cout<<endl;

}
*/











/*cout<<"subtraction is:"<<endl;
for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
        cout<<a[i][j]-b[i][j]<<" ";
       }
       cout<<endl;
}

*/




return  0;


}
/*void multiply(int a[][3],int m,int n,int b[][3],int p,int q){

if(n!=p){
    cout<<"cannot multiply"<<endl;
    return;
}
int mul[m][q];
for(int i=0;i<m;i++)
{
   for(int j=0;j<q;j++){
        mul[i][j]=0;
        for(int k=0;k<q;k++){

              mul[i][j]+=a[i][k]*b[k][j];

        }


   }



}
cout<<"multiplication is:"<<endl;
for(int i=0;i<m;i++){
       for(int j=0;j<q;j++){
        cout<<mul[i][j]<<" ";
       }
       cout<<endl;

}







}*/
 void transpose(int a[][3],int m,int n){

int temp;
for(int i=0;i<m;i++){

for(int j=0;j<n;j++){
if(j>i){
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;


}



}
}
cout<<"Transpose is:"<<endl;
for(int i=0;i<m;i++){

for(int j=0;j<n;j++){
cout<<a[i][j]<<" ";


}
cout<<endl;


}

}







int determinant( int matrix[][3]) {
   
   
   
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));

}