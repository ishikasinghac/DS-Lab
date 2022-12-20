#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};
struct node* makenode(int x)
{
struct node* p;
p=(struct node*) malloc(sizeof(struct node));
p->data=x;
p->left=NULL;
p->right=NULL;
return p;
}
createtree(struct node** t)
{
    struct node* p;
    int x,choice;
    printf("LEFT EXISTS?(1/0)",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("data of left of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->left=p;
        createtree(p);
    }
    printf("RIGHT EXISTS?(1/0)",(*t)->data);
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("data of right of %d",(*t)->data);
        scanf("%d",&x);
        p=makenode(x);
        (*t)->right=p;
        createtree(p);
    }
}