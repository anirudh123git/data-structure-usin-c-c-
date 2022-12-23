#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node{
int data;
struct node*left;
struct node*right;


};
struct node*newnode(int data){//node creation 

struct node*n1;
n1=(struct node*)malloc(sizeof(struct node));
n1->data=data;
n1->left=NULL;
n1->right=NULL;

return n1;


}

void inorder(struct node*m){//inorder traversal
if(m==NULL)
    return;
inorder(m->left);

printf("%d  ",m->data);

inorder(m->right);





}
void preorder(struct node*m){//preorder traversal
if(m==NULL)
    return;
printf("%d  ",m->data);
preorder(m->left);


preorder(m->right);





}
void postorder(struct node*m){//postorder traversal
if(m==NULL)
    return;

postorder(m->left);


postorder(m->right);
printf("%d  ",m->data);




}
int height(struct node*root){
if(root==NULL)    //height of tree calculation
   return 0;
else{
int lefth=height(root->left);
int righth=height(root->right);
if(lefth>righth)
   return lefth+1;
else
   return righth+1;




}





}
int count(struct node*root){
if(root==NULL)//count no. of nodes
   return 0;
else{
int lefth=count(root->left);
int righth=count(root->right);
return lefth+righth+1;
}


}
int sum(struct node*root){
if(root==NULL)
   return 0;// sum of nodes of tree
else{
int sumleft=0,sumright=0;
sumleft+=sum(root->left);
sumright+=sum(root->right);
return (root->data +sumleft +sumright);

}


}
int countone(struct node*root){
if(root==NULL) //number of nodes with one child
   return 0;
else{
if(root->left!=NULL && root->right==NULL)
    return countone(root->left)+1;
else if(root->left==NULL && root->right!=NULL)
    return countone(root->right)+1;   
else
   return countone(root->left)+countone(root->right);     
}


}
int counttwo(struct node*root){

if(root==NULL)
   return 0;// number of nodes with two child
else{
if(root->left!=NULL && root->right!=NULL)
    return countone(root->left)+countone(root->right)+2;     



}





}
int countleaf(struct node*root){

if(root==NULL)
   return 0;// number of leaf nodes
else{
if(root->left==NULL && root->right==NULL)
    return countleaf(root->left)+countleaf(root->right);     



}





}
bool iscbt(struct node*root,int index ,int node_count) {

if(root==NULL){
   return true;    //to check complete binary tree using recursion
}
else if(index >node_count) {
   return false;
}
return iscbt(root->left,2*index,node_count) && iscbt(root->right,2*index+1,node_count);



}
bool isFullTree (struct node* root)
{
    
    if (root == NULL)
        return true;  //to check full binary tree
  
    
    if (root->left == NULL && root->right == NULL)
        return true;
  
    
    if ((root->left) && (root->right))
        return (isFullTree(root->left) && isFullTree(root->right));
  
    
    return false;
}


void main(){
struct node*root=(struct node*)malloc(sizeof(struct node));
root=newnode(1);
root->left=newnode(2);
root->right=newnode(3);
root->left->left=newnode(4);
root->left->right=newnode(5);





}

