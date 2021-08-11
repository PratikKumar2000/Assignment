#include <stdio.h>
int nelems;
int n;
void insert_element(int pos, int item, int a[n]);
void delete(int pos,int a[n]);
void display(int a[n]);
int main()
{
    printf("enter the size of array you want ");
    scanf("%d",&n);
    int arr[n];
    insert_element(0,12,arr);
    insert_element(0,3,arr);
    insert_element(1,34,arr);
    insert_element(1,32,arr);
    delete(1,arr);
    display(arr);
    
    return 0;

}
void insert_element(int pos,int item,int a[n])
{
    if(nelems == n)
    {
        printf("no further elements can be added");
        return;
    }

   if(pos < n)
   {
       int i;
       for(i = nelems; i > pos;i--)
       {
        a[i] = a[i-1];
       }
       a[pos] = item;
       nelems++;
   }
   else{
       printf("invalid index");
   }
}
void display(int a[n])
{
   printf("the elements of the array are \n");
   for(int i = 0; i < nelems; i++)
   {
      printf("element at position %d is %d \n",i,a[i]);
   }
}
void delete(int pos,int a[n])
{
    if(nelems==0)
    {
        printf("you cannot take out an empty element from an array");
        return;
    }
   if(pos < n)
   {
       for(int i = pos; i < nelems-1; i++)
       {
          a[i] = a[i+1];
       }
       nelems--;
   }
   else
   {
       printf("invalid index");
   }
}