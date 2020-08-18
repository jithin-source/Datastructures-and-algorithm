#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data; // data
 struct Node *next; // link to next node
}*first=NULL;
void create(int number_node)
{
 int i,data;
 struct Node *newNode,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 printf("Enter the data of node 1: ");
 scanf("%d", &data);
 first->data = data;
 first->next=NULL;
 last=first;
 for(i=2;i<number_node+1;i++)
 {
 newNode=(struct Node*)malloc(sizeof(struct Node));
 printf("Enter the data of node %d: ",i);
 scanf("%d", &data);
 newNode->data = data;
 newNode->next=NULL;
 last->next=newNode;
 last=newNode;
 }
}
void Reverse(struct Node *p)
{ struct Node *previous=NULL,*current,*temp=NULL;
 current = p;
 while(current!=NULL)
 {
 temp = previous;
 previous=current;
 current=current->next;
 previous->next=temp;
 }
 first=previous;
}
void Display(struct Node *list)
{
 printf("data list :");
 while(list!=NULL)
 {
 printf("\n %d",list->data);
 list=list->next;
 }
}

int main()
{
  int Number_node,position;
  printf("Enter the total number of nodes: ");
  scanf("%d", &Number_node);
  create(Number_node);
  Display(first);
  Reverse(first);
  Display(first);
 return 0;
}

