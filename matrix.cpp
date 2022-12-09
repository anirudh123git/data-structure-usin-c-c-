#include<iostream>
using namespace std;
bool magic(int a[][3]);
int main(){

int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       cin>>arr[i][j];


    }
}

if(magic(arr)){
    cout<<"Magic Square"<<endl;
}
else{
cout<<"no magic"<<endl;
}


return 0;
}
bool magic(int a[][3]){

int sumd1=0,sumd2=0;
for(int i=0;i<3;i++){

for(int j=0;j<2;j++){


    sumd1+=a[i][i];



    sumd2=sumd2+a[i][2-i];



if(sumd1!=sumd2){
    return false;
}


}

}
int row=0,col=0;
for(int i=0;i<3;i++){
     int row=0,col=0;
    for(int j=0;j<3;j++){
             row+=a[i][j];
             col+=a[j][i];


    }
}
if(row !=col || col!=sumd1){
    return false;
}


return true;







}