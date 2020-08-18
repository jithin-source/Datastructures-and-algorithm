
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
 newNode->next=first;
 last->next=newNode;
 last=newNode;
 }
}
void Display(struct Node *list)
{
 printf("data list :");

 do{
 printf("\n %d",list->data);
 list=list->next;
 }while(list!= first);

}
int main()
{
  int Number_node;
  printf("Enter the total number of nodes: ");
  scanf("%d", &Number_node);
  create(Number_node);
  Display(first);

 return 0;
}






