
#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
    int data;
	struct node *left, *right, *father;
};


struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node* root)
{
	if (root != NULL) 
    {
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}


struct node* insert(struct node* node, int key)
{

	if (node == NULL)
		return newNode(key);


	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	
	return node;
}
int minValue(struct node* node)
{
	struct node* current = node;


	while (current->left != NULL) {
		current = current->left;
	}
	return (current->data);
}

struct node* successor(struct node* node)
{
    struct node* q;
if(node->right!=NULL)
{
minValue(node->right);
}
else{
    q=node->father;
    while(q->right==node && q!=NULL)
    {
        node=q;
        q=q->father;
    }
}
return q;
}


int main()
{
	
	struct node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);
	inorder(root);

	return 0;
}
