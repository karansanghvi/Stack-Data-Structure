//WAP to perform push, peek and display elements
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#define MAX 10
int stack[MAX], top=-1;
void push(int stack[], int val);
int peek(int stack[]);
void display(int stack[]);
//driver code
void main() {
    int val, choice;
    do 
    {
        printf("\n 1. PUSH");
        printf("\n 2. PEEK");
        printf("\n 3. DISPLAY");
        printf("\n EXIT");
        printf("\n Enter your option: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        prinf("\n Enter the number to be pushed on stack: ");
        scanf("%d",&val);
        push(stack,val);
            break;
        
        case 2:
        val = peek(stack);
        if(val!=1)
        prinf("\n The value stored at top of stack is: %d",val);
            break;

        case 3:
        display(stack);
            break;
        }
    } while (choice!=4);
    getch();
}

//to push an element into the stack
void push(int stack[], int val) {
    if(top==MAX-1) 
    {
        prinf("\n Stack Overflow!!");
    }
    else 
    {
        top++;
        stack[top] = val;
    }
}

//to peek an element into the stack
int peek(int stack[]) {
    if(top == -1) 
    {
        prinf("\n Stack Is Empty!!");
        return -1;
    }
    else
    return(stack[top]);
}

//to display element into the stack
void display(int stack[]) 
{
    int i;
    if(top==-1) 
    printf("\n Stack Is Empty!!");
    else 
    {
        for(i=top;i>=0;i--)
        printf("\n%d",stack[i]);
    }
}