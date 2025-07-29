#include<stdio.h>

void display(int arr[], int size)
{
    for( int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int insertion(int arr[],int size, int index,int element, int capcity )
{
   if(size>=capcity)
   {
    return -1;
   }
   for(int i = size-1; i>=index; i--)
   {
       arr[i+1] = arr[i];
   }
   arr[index]= element;
   return 1;
}

int main()
{      //          0  1  2  3  4
    int arr[100]= {31,5,42,12,25};
    int size=5, element=43, index=3, capcity=100;
    int warning;
    warning = insertion(arr,size, index, element,capcity);

    if(warning==1)
    {
        display(arr, size);
        printf("\nInsertion is Completed Sucessfully");
        size +=1;
        printf("\n");
        display(arr, size);
    }
    else
    {
        printf("\nInsertion Failed!");
    }

    return 0;
}
