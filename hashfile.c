#include<stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[TABLE_SIZE]={0};
void insertlinear(){
int key,index,i,flag=0,hkey;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 for(i=0;i<TABLE_SIZE;i++)
    {index=(hkey+i)%TABLE_SIZE;
if(h[index] == 0)
     {
        h[index]=key;
         break;
     }

    }

    if(i == TABLE_SIZE)

     printf("\nelement cannot be inserted\n");
}
void display()
{

  int i;

  printf("\nelements in the hash table are \n");

  for(i=0;i< TABLE_SIZE; i++)

  printf("\nat index %d \t value =  %d",i,h[i]);

}
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
void insertdouble()
{

 int key,index,i,flag=0,hkey,hash2;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%TABLE_SIZE;
 hash2 = 7-(key %7);
 for(i=0;i<TABLE_SIZE;i++)
 {
    index=(hkey+i*hash2)%TABLE_SIZE;
    if(h[index] == 0)
    {
        h[index]=key;
        break;
    }
 }
 if(i == TABLE_SIZE)
     printf("\nelement cannot be inserted\n");
}

void  main(){
printf("1.Linear probing\n2.Quadritic Probing\n3.Double Hashing");
int ch;
printf("enter your choice:");
scanf("%d",&ch);
int n;


switch(ch){
case 1:
     printf("enter no. of keys:");
scanf("%d",&n);
for ( int i=0; i < n; i++)
{ 
 insertlinear();
}
display();
     break;
case 2:
printf("enter no. of keys:");
scanf("%d",&n);
for ( int i=0; i < n; i++)
{ 
 insertquad();
}
display();
 break;
case 3:
printf("enter no. of keys:");
scanf("%d",&n);
for ( int i=0; i < n; i++)
{ 
 insertdouble();
}
display();
 break;
default:
    break;


};
}

