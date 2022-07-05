#include<stdio.h>
int n;
int linear(int array[n], int n,int s)
{
    for(int i = 0;i<n;i++)
    {
        if(array[i] == s)
        {
          return i;
        }        
    }
    return -1;
}
int main()
{
    int size,search,result;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter %d elements in the array: ",size);
    for(int i = 0;i<size;i++)
    {
        printf("\nElement %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nEnter element to be searched: ");
    scanf("%d",&search);
    result = linear(array[size],size,search);
    if(result == -1)
   { printf("Element not found");}
    else
    {printf("Element found at %d ",result);}

}