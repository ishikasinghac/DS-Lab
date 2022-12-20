#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};
struct node* makenode(char x)
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
height(struct node* t)
{
    if(t==NULL)
    {
        return 0;
    }
    else if(t->left== NULL && t->right==NULL)
    {
        return 0;
    }
    else
    {
        return max(height(t->left),height(t->right));
    }
}
int main()
{
struct node* root=NULL;
int x;
printf("enter data of root node");
scanf("%d",&x);
root=makenode(x);
    root=makenode('a');
    root->left=makenode('b');
    root->right=makenode('c');
    root->left->left=makenode('d');
    root->left->right=makenode('e');
    

}