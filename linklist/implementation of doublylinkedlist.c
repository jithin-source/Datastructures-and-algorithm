#include <stdio.h>
#include <stdlib.h>
struct Node
{
 struct Node *previous; // link to previous node
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
 first->previous = NULL;
 first->data = data;
 first->next=NULL;
 last=first;
 for(i=2;i<number_node+1;i++)
 {
 newNode=(struct Node*)malloc(sizeof(struct Node));
 printf("Enter the data of node %d: ",i);
 scanf("%d", &data);
 newNode->previous = last;
 newNode->data = data;
 newNode->next=NULL;
 last->next=newNode;
 last=newNode;
 }
}
void Display(struct Node *list)
{
 printf("data list :");
 while(list!=NULL)
 {
 printf("\n%d  ",list->data);
 list=list->next;
 }
}

int main()
{
  int Number_node,data;
  printf("Enter the total number of nodes: ");
  scanf("%d", &Number_node);
  create(Number_node);
  Display(first);

 return 0;
}

