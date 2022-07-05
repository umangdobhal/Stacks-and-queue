#include <stdio.h>
#include <stdlib.h>
#define max 10
int top;
int stack[max];
struct tree
{
    int info;
    struct tree *rt;
    struct tree *lf;
};
typedef struct tree node;
node *root = NULL;
node *n = NULL;
int insert();
int preorder();
void push();
int pop();
void main ()
{
    int i,ch,x,n,a,x1;
    while(1)
    {
        printf("\nEnter the choice");
        printf("\n1. Creation");
        printf("\n2. Traversing");
        printf("\n3. exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter the number of nodes you want: ");
            scanf("%d",&a);
            printf("\nEnter %d element: \n",a);
            for(int i=0;i<a;i++)
            {
                scanf("%d",&x);
                insert(x);
            }
            break;

            case 2:
            preorder();
            break;

            case 3:
            exit(0);
            break;

            default:
            printf("Enter the correct choice");
        }
    }
}
int insert(int x)
{
    node *ptr,*par,*p;
    ptr = (node *)malloc(sizeof(node));
    if(ptr==NULL)
    {
        printf("can't insert");
    }
    else
    {
        ptr->info = x;
        ptr->lf = NULL;
        ptr->rt = NULL;
        if(root==NULL)
        {
            root = ptr;
            root->lf = NULL;
            root->rt = NULL;
        }
        else
        {
            par = NULL;
            p = root;
            while(p!=NULL)
            {
                par = p;
                if(x<p->info)
                {
                    p = p->lf;
                }
                else
                {
                    p = p->rt;
                }
            }
            if(x<par->info)
            {
                par->lf = ptr;
            }
            else
            {
                par->rt = ptr;
            }
        }
        printf("Node inserted\n");
        printf("Enter next: ");
    }
}
int preorder()
{
    node *p;
    push(NULL);
    p = root;
    printf("\nThe element in the list: ");
    while(p!=NULL)
    {
        printf("%d ",p->info);
        if(p->rt!=NULL)
        {
            push(p->rt);
        }
        if(p->lf!=NULL)
            p = p->lf;
        else
            p = pop();
    }
}
void push(int x)
{
    top = top+1;
    stack[top] = x;
    return;
}
int pop()
{
    int x;
    x = stack[top];
    top = top-1;
    return x;
}