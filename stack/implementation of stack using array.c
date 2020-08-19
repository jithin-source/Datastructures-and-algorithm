#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int size;
    int top;
    int *A;
};
void create (struct Stack * S)
{
    int size;
    printf("Enter the size of stack");
    scanf("%d",&S->size);
    S->A = (int *)malloc(S->size * sizeof(int)); // creating a memmory in heap
    S->top = -1; // intial  stack is empty
}
void Display (struct Stack S)
{
    int i;
    printf("\n Elemets in stack :");
    for(i = S.top;i>=0;i--)
    {
        printf("\n %d",S.A[i]);
    }
}
void push(struct Stack *S, int data)
{
    if(S->size == S->top-1)
    {
        printf("stack overflow \n");
    }
    else
    {
        S->top = S->top +1;
        S->A[S->top] = data;

    }
}
void pop(struct Stack *S)
{
    if(S->top == -1)
    {
        printf("\n stack under flow");
    }
    else
    {
        S->top--;
    }
}
int isEmpty(struct Stack *S)
{
      if(S->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Stack *S)
{
  if(S->size == S->top-1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    struct Stack s1;
    create(&s1);
    push(&s1,5);
    push(&s1,3);
    push(&s1,7);
    push(&s1,0);
    Display(s1);
    pop(&s1);
    Display(s1);
        return 0;
}
