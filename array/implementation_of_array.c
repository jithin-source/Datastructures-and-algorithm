#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int lenght;

};
void display (struct array number)
{

    int i,n;
    n = A.number;
    for(i=0;i<n;i++)
    {
        printf("%d",numberS.A[i]);
    }
}

int main()
{
   struct array number;
   int n,i;
   printf("Enter the size of array :");
   scanf("%d",&number.size);
   number.A = (int*)malloc(number.size*sizeof(int)); // creating a array in heap ,dynamic array
   number.length = 0;
   printf("Enter the number of Elements");
   scanf("%d",&n);
   printf("Enter  the Elements");
   for(i = 0; i < n; i++)
   {
       scanf("%d",&number.A[i]);
       number.length = n;
   }
   display(number);

}
