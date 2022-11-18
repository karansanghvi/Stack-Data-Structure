//WAP to push an element into stack
#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
void display(void);
//Driver code
void main() {
    int choice;
    s.top = -1;
    do
    {
        push();
        printf("Do you want to continue (type 0 or 1)? \n");
        scanf("%d",&choice);
    }while (choice==1);
    display();
}
//To push an element into the stack
void push() {
    int num;
    if(s.top==(MAXSIZE-1))
    {
        printf("\n Stack is full!!");
        return;
    }
    else
    {
        printf("\n Enter the element to be pushed: ");
        scanf("%d",&num);
        s.top = s.top+1;
        s.stk[s.top] = num;
    }
    return;
}
//To display the elements
void display() {
    int i;
    if(s.top == -1)
    {
        printf("Stack is empty!!");
        return;
    }
    else
    {
        printf("\n The status of the stack is: ");
        for(i=s.top;i>=0;i--) {
            printf("%d\n",s.stk[i]);
        }
    }
    printf("\n");
}