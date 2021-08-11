#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements you want in the array - ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array-- ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("size of array is-- %d", sizeof(arr)/sizeof(n));

    return 0;
}