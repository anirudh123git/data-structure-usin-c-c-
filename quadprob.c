#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 7

int h[TABLE_SIZE]={0};

void insertquad()
{

 int key,index,i,hkey;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
{
           
     index=(hkey+i*i)%TABLE_SIZE;
         
     if(h[index] == 0)
     {   
        h[index]=key;
         break;
     }
}
if(i == TABLE_SIZE)
     printf("\nelement cannot be inserted\n");
}
void display(){
for(int i=0;i<TABLE_SIZE;i++)
printf("item at index %d =%d\n",i,h[i]);






}
void main(){
int n;
printf("enter number of keys to insert:");
scanf("%d",&n);
for(int i=0;i<n;i++){
insert();
}

display();



}