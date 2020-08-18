
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
void Delete(struct Node *List,int Postion)
{
    struct Node * temp ,*temp1;
    int i;
    temp1 = NULL;
    temp = List;
    if(Postion == 1)
    {
        temp1 = first;
        while(temp->next != first)
       {
          temp =  temp->next;
       }
        temp->next = first->next;
        first = temp->next;
        free(temp1);
        return;
    }
    for(i=1;i<Postion;i++)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = temp->next;
    free(temp);
    return ;
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
  int Number_node,data,postion;
  printf("Enter the total number of nodes: ");
  scanf("%d", &Number_node);
  create(Number_node);
  Display(first);
  printf(" \n Enter the postion  ");
  scanf("%d",&postion);
  Delete(first,postion);
  Display(first);
 return 0;
}






