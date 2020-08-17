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
void Atthebeginning(int data)
{
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = first;
    first = newNode;
}
void Attheend(int data)
{
    struct Node *newNode,*temp;
    temp = first;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    while(temp->next != NULL)
     {

     temp=temp->next;
     }
    temp->next = newNode;
    newNode->next = NULL;
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
  int Number_node,data;
  printf("Enter the total number of nodes: ");
  scanf("%d", &Number_node);
  create(Number_node);
  Display(first);
  printf(" \n Enter the data to be inserted at the beginning ");
  scanf("%d",&data);
  Atthebeginning(data);
  Display(first);
  printf("\n Enter the data to be inserted at the end ");
  scanf("%d",&data);
  Attheend(data);
  Display(first);
 return 0;
}






