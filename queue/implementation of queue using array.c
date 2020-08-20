// implementation of queue using array
#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int size;
    int front;
    int rear;
    int *A;
};
void Create_queue(struct Queue *Q ,int size)
{
    Q->size = size;
    Q->front =Q->rear = -1;
    Q->A = (int *)malloc(Q->size*sizeof(int));
}
void enqueue (struct Queue *q,int data)
{
    if(q->rear==q->size-1)
 printf("Queue is Full");
 else
 {
 q->rear++;
 q->A[q->rear]=data;
 }
}
int dequeue(struct Queue *q)
{
 int x=-1;

 if(q->front==q->rear)
 printf("Queue is Empty\n");
 else
 {
 q->front++;
 x=q->A[q->front];
 }
 return x;
}
void Display(struct Queue q)
{
 int i;

 for(i=q.front+1;i<=q.rear;i++)
 printf("%d ",q.A[i]);
 printf("\n");
}
int main()
{
    int size;
    struct Queue Q1;
    printf("Enter the size of queue:");
    scanf("%d",&size);
    Create_queue(&Q1,size);
    enqueue(&Q1,5);
    enqueue(&Q1,6);
    enqueue(&Q1,3);
    enqueue(&Q1,4);
    Display(Q1);
    dequeue(&Q1);
    Display(Q1);

    return 0;
}
