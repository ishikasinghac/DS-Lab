#include<stdio.h>
#include<stdlib.h>
#define TRUE=1;
#define FALSE=0;
struct node
{
    int data;
    struct node* left;
    struct node* right;
    struct node*next;
    
};
makenode(int x)
{
    struct node* p;
    p=(struct node*) malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->right->NULL;
    p->NEXT;

}
void initialize(struct node **rear,struct node **front)
{
    *rear=NULL;
    *front=NULL;
}
void enqueue(struct node* rear,struct node* front,int x,struct node* p)
{
if(rear!=NULL)
    rear->next=p;
    else
    front=p;
rear=p;    

}
struct node* dequeue(struct node *rear,struct node *front,struct node* p)
{
struct node *p;
p=front;
front=front->next;
if(front==NULL)
{
    rear=NULL;
}
return p;
}
bool isempty(struct node *rear,struct node *front)
{
    if((front)==NULL)
    return TRUE;
    else
    return FALSE;
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
void PreOrderTraversal(struct node* tree)
{
    if(tree!=NULL)
    {
        printf("%d",tree->data);
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);

    }
}
void InOrderTraversal(struct node* tree)
{
    if(tree!=NULL)
    {
        
        InOrderTraversal(tree->left);
        printf("%d",tree->data);
        InOrderTraversal(tree->right);
        
    }
}
void PostOrderTraversal(struct node* tree)
{
    if(tree!=NULL)
    {
        
        PostOrderTraversal(tree->left);
        PostOrderTraversal(tree->right);
         printf("%c=d",tree->data);
        
    }
}

void leveordertraversal(struct node* t)
{
    initialize();
    enqueue(t);
    while(!isempty())
    {
        p=dequeue();
        printf("\t%d",p);
        if(p->left!=NULL)
        enqueue(p->left);
        if(p->right!=NULL)
        enqueue(p->right);
    }
}
