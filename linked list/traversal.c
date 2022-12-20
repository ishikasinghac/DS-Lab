#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void count_of_nodes(head)
{
    int count=0;
    if (head=NULL)
    {
        printf("void");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);
}
void print(head)
{
    if (head=NULL)
    {
        printf("void");
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    
}

int main()
{
    
    count_of_nodes(head);
    print(head);

}