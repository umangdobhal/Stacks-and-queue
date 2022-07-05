#include<stdio.h>
void main()
{
    int num,i,A[100],search,first,last,middle;
    printf("How many elements do you want to enter in the array: ");
    scanf("%d",&num);
    printf("Enter %d element in array: ",num);
    for(i = 0;i<num;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the number for search: ");
    scanf("%d",&search);
    first = 0;
    last = num - 1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if(A[middle]<search)
        first = middle+1;
        else if (A[middle]==search)
        {
            printf("%d found at location %d",search,middle+1);
            break;
        }
        else
        { last = middle - 1;
        middle = (first+last)/2; }   
        if (first>last)
        printf("%d not present in array",search);    
    }
         
}