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
struct node* reverse(struct node* start)
{
    struct node* previous=NULL;
    struct node* current=start;
    struct node* next=start->next;
    while (current!=NULL)
    {
        next=current->next;
        current->next=previous;
          previous=current;
          current=next;
    }
    start=previous;
  return previous;
}
int main()
{
 struct node *start,*prev,*p;
 int n,i;
 printf("enter n:");
 scanf("%d",&n);
 start=NULL;
 printf("enter elements of start:");
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(start==NULL)
            start=p;
        else
            prev->next=p;
        prev=p;
    }
    display(reverse(start));
    return 0;
}