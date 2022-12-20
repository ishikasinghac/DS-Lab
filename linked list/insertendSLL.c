#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link; 
 };
void ins_end(struct node* head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)(malloc(sizeof(struct node)));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
int main()
{
    struct node* head=alloc(sizeof(struct node));
    head->data=5;
    head->link=NULL;

    struct node* ptr=head;
    ptr=ins_end(ptr,7);
    ptr=ins_end(ptr,98);
    ptr=ins_end(ptr,4);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    return 0; 
}