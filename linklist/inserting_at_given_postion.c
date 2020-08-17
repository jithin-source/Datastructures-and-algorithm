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
void insert(struct Node *list,int postion, int data)
{
    struct Node *newNode;
    int i;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if(postion == 0)
    {
        newNode->next = first;
        first = newNode;
    }
    else{
        for(i=1;i<postion-1;i++)
        {
            list = list->next;
        }
        newNode->next = list->next;
        list->next = newNode;

    }

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
  int Number_node,data,postion;
  printf("Enter the total number of nodes: ");
  scanf("%d", &Number_node);
  create(Number_node);
  Display(first);
  printf(" \n Enter the postion and  data  ");
  scanf("%d%D",&postion,&data);
  insert(first,postion,data);
  Display(first);
 return 0;
}