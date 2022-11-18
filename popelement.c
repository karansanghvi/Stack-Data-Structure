//WAP to pop an element into stack
#include <stdio.h>  
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
int  pop(void);  
void main ()  
{  
    int choice;  
    s.top = -1;  
    do  
    {  
     push();  
     printf ("Do you want to continue(Type 0 or 1)?\n");  
     scanf ("%d", &choice);  
    }while(choice==1);        
     pop();  
     display();  
}  
void push ()  
{  
    int num;  
    if (s.top == (MAXSIZE - 1))  
    {  
        printf ("Stack is Full\n");  
        return;  
    }  
    else  
    {  
        printf ("Enter the element to push\n");  
        scanf ("%d", &num);  
        s.top = s.top + 1;  
        s.stk[s.top] = num;  
    }  
    return;  
}  
int pop ()  
{  
    int num;  
    if (s.top == - 1)  
    {  
        printf ("Stack is Empty\n");  
        return (s.top);  
    }  
    else  
    {  
        num = s.stk[s.top];  
        printf ("poped element is = %dn", s.stk[s.top]);  
        s.top = s.top - 1;  
    }  
    return(num);  
}  
void display ()  
{  
    int i;  
    if (s.top == -1)  
    {  
        printf ("Stack is empty\n");  
        return;  
    }  
    else {
         printf ("\n Current stack is \n");  
        for (i = s.top; i >= 0; i--)  
        {  
            printf ("%d\n", s.stk[i]);  
        }
        printf("\n");
    }  
}