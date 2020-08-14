#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *element;
    int size;
    int length;

};
void Display (struct array number)
{

    int i,n;
    n = number.length;
    for(i=0;i<n;i++)
    {
        printf("%d ",number.element[i]);
    }
}
void Append(struct array *number,int inserting_number ) // call by reference is used
{
    if(number->length < number->size)
    {


    number->element[number->length++]=inserting_number;

    }

}
void Insert (struct array *number,int index,int inserting_number)
{
    int i;
    if (index >= 0 && index <= number->length)
    {
        for(i=number->length;i>index;i--)
        {
            number->element[i] = number->element[i-1];

        }
        number->element[index] = inserting_number;
        number->length++;
    }
}
void  Delete(struct array *number,int index)
{
    int i;
    for(i = index;i<number->length;i++)
    {
        number->element[i] =  number->element[i+1];

    }

    number->length--;
}


int main()
{
  struct array number;
   int n,i;
   printf("Enter the size of array :");
   scanf("%d",&number.size);
   number.element = (int*)malloc(number.size*sizeof(int)); // creating a array in heap ,dynamic array
   number.length = 0;
   printf("Enter the number of Elements");
   scanf("%d",&n);
   printf("Enter  the Elements");
   for(i = 0; i < n; i++)
   {
       scanf("%d",&number.element[i]);
       number.length = n;
   }
   Append(&number,20);
   Append(&number,40);
   Insert(&number,0,1);
   Append(&number,50);
   Delete(&number,0);
   Display(number);

   return 0;


}
