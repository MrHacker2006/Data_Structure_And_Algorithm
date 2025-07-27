#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int * ptr;  // This is pointing to the first index of the myArray
};

void createArray(int tsize,int usize, struct myArray* a)
{
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int*)malloc(tsize*sizeof(int));

    // Both will give the same output

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize*sizeof(int));
}

void setValue(struct myArray *a)
{
  int n;
  for (int i = 0; i < a->used_size; i++)
  {
    printf("Enter Element %d:",i+1);
    scanf("%d", &n);
    // scanf("%d", &(a->ptr)[i]);    # this is also working
    (a->ptr)[i] = n;
  }
}

void show(struct myArray *a)
{
   for (int i = 0; i< a->used_size ; i++)
   {
     printf("%d\n", (a->ptr)[i]);
   }
}

int main()
{  struct myArray marks;
   createArray(10,2, &marks);
   printf("We are currently inside setValue\n");
   setValue(&marks);
   printf("We are currently inside at show\n");
   show(&marks);
   return 0;
}  