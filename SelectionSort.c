#include <stdio.h>
int selectionSort(int array[], int size)
{
    for(int step=0;step<size;step++)
    {
        int min_idk = step;
        for(int i=step+1;i<size;i++)
        {
            if(array[i]<array[min_idk])
            {
                min_idk = i;
            }
        }
        int temp = array[step];
        array[step] = array[min_idk];
        array[min_idk] = temp;
    }
}
int printArray(int array[],int size)
{
    for(int j=0;j<size;j++)
    {
        printf("%d ",array[j]);
    }
    printf("\n");
}
int main ()
{
    int n;
    printf("Enter the number of element in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array: ");
    printArray(arr,n);
    selectionSort(arr,n);
    printf("Sorted array: ");
    printArray(arr,n);
    return 0;
}