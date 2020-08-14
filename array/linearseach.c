#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *element;
    int size;
    int length;

};
int Linearsearch(struct array number , int search_element)
{
    int i;
    for(i=0;i<number.length;i++)
    {
        if(number.element[i] == search_element )
        {
           return i;
        }

    }
    return -1;

}

int main()
{

  struct array number;
   int n,i,search_element;
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
   printf("Enter the number to be searched :");
   scanf("%d",&search_element);
   printf("position is %d",Linearsearch(number,search_element));
   return 0;
}
