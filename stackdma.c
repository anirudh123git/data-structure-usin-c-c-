#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int a[7];
    int top;
} * s;
void create()
{

    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    printf("stack created\n");
}
void push()
{
    int item;
    printf("enter element:");
    scanf("%d", item);
    if (s->top == 6)
    {
        printf("stack overflow");
        return;
    }
    else
    {
        s->top++;
        s->a[s->top] = item;
        printf("%d item pushed to stack:\n", item);
    }
}
void pop()
{

    if (s->top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    else
    {
        int item = s->a[s->top];
        s->top--;
        printf("deleted element is %d \n:", item);
    }
}
void display()
{
    for (int i = s->top; i >= 0; i++)
    {
        printf("%d", s->a[i]);
    }
}

void main()
{

    while (1)
    {
        int ch;
        printf("1.CREATE\n");
        printf("2.PUSH\n");
        printf("3.POP\n");
        printf("4.DISPLAY\n");
        printf("enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {

        case 1:
            create();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        default:
            printf("invaild input");
            break;
        }
    }
}
