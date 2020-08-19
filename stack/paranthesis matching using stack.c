//Parenthesis Matching

#include <stdio.h>
#include <stdlib.h>
struct Node
{
 char data;
 struct Node *next;
}*top=NULL;
void push(char x)
{
 struct Node *temp;
 temp=(struct Node*)malloc(sizeof(struct Node));

 if(temp==NULL)
 printf("stack is full\n");
 else
 {
 temp->data=x;
 temp->next=top;
 top=temp;
 }

}
char pop()
{
 struct Node *temp;
 char x=-1;

 if(top==NULL)
 printf("Stack is Empty\n");
 else
 {
 temp=top;
 top=top->next;
 x=temp->data;
 free(temp);
 }
 return x;
}
int isBalanced(char *exp)
{
 int i;

 for(i=0;exp[i]!='\0';i++)
 {
 if(exp[i]=='(')
 push(exp[i]);
 else if(exp[i]==')')
 {
 if(top==NULL)
 return 0;
 pop();
 }
 }
 if(top==NULL)
 return 1;
 else
 return 0;
}
int main()
{
 char *exp="((a+b)*(c-d)))";

 printf("%d ",isBalanced(exp));

 return 0;
}