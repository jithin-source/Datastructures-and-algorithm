#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *element;
    int size;
    int length;

};
int Binarysearch(struct array number , int search_element)
{
    int first ,end,mid;
    first = 0;
    end = number.length;
    while(first<=end)
    {
      mid = (first+end )/ 2 ;
    if(number.element[mid] == search_element)
    {
        return mid;
    }else
    {
        if(number.element[mid] < search_element )
        {
            first = mid+1;
        }
        else
        {
            end= mid-1;
        }
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
   printf("position is %d",Binarysearch(number,1));
   return 0;


}
