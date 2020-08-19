#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    int *next;
}*top = NULL;

void Display ()
{
    struct Node *stack;
    stack = top;
    printf("\n Elemets in stack :");
    while(stack->next != NULL )
    {
        printf("\n %d",stack->data);
        stack = stack->next;
    }
}
void push(int data)
{
    struct Node *stack;
    stack = (struct Node *)malloc(sizeof(struct Node));
    if(stack == NULL)
    {
        printf(" \n stack overflow: ");
    }
    else{
        stack->data = data;
        stack->next = top;
        top = stack;

    }

}
void pop()
{
    struct Node *temp;
    if(top == NULL)
    {
        printf("\n stack under flow");
    }
    else
    {
       temp = top;
       top = top->next;
       free(temp);
    }
}

int main()
{
    struct Node s1;
    push(5);
    push(3);
    push(7);
    push(0);
    Display();
    pop();
    Display();
        return 0;
}
