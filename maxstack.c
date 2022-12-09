#include <stdio.h>
#include<stdlib.h>
struct stack
{

    int a[5];
    int top;
    

} * s1, *s2;
void create()
{
    
    s1 = (struct stack *)malloc(sizeof(struct stack));
    s2 = (struct stack *)malloc(sizeof(struct stack));
    s1->top=-1;
    s2->top=-1;
}
void push(struct stack *s, int item)
{
    if (s->top == 4)
    {
        printf("stack overflow");
        return;
    }

    s->top++;
    s->a[s->top] = item;
}
void pop(struct stack *s)
{
    if (s->top == -1)
        printf("stack empty");
        return ;
        
   
    s->top--;
    

}
int  main()
{
    create();
    push(s1,1);
    push(s1,2);
    push(s1,3);
    push(s1,4);
    push(s1,5);
    push(s2,s1->a[s1->top]);
while(s1->top!=-1){
int y=s1->a[s1->top];
if(y>(s2->a[s2->top])){
    s2->a[s2->top]=y;
    pop(s1);
}
else
{

   pop(s1);


}




}
printf("max element is %d",s2->a[s2->top]);



return 0;


}