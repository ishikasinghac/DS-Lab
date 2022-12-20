#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

void display(struct node *head)
{
  if(head!=NULL)
    {
        printf("%d\n",head->data);
        display(head->next);
    }
}
struct node* concatenate(struct node *start1, struct node *start2 )
{
    struct node* p=start1;
    if(start1!=NULL)
    {
        while (p->next!=NULL)
        {
            /* code */
            p=p->next;
        }
       p->next=start2; 
       return start1;
    }
    
    else
    {
        if(start2==NULL)
        return NULL;
        else
        return start2;
    }
}
int main()
{
 struct node *start1,*prev,*start2,*p;
 int n,i;
 printf("enter n:");
 scanf("%d",&n);
 start1=NULL;
 printf("enter elements of start1:");
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start1==NULL)
            start1=p;
        else
            prev->next=p;
        prev=p;
    }
    start2=NULL;
    printf("enter elements of start2:");

    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start2==NULL)
            start2=p;
        else
            prev->next=p;
        prev=p;
    }
    display(concatenate(start1,start2));
    return 0;
}