#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* create_node(int data)
{
    struct node* new=malloc(sizeof(struct node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    return new;
}

struct node* insert_bst(struct node* root,int data)
{
if(root==NULL)
	{
	root=create_node(data);
	}
else
	{
	if(data<root->data)
		{
		root->left=insert_bst(root->left,data);
		}
	else
		{
		root->right=insert_bst(root->right,data);
		}
	}
return root;
}

struct node* takeinput(struct node* root)
{
int data;
printf("enter data for node: ");
scanf("%d",&data);
while(data!=-1)
	{
	root=insert_bst(root,data);
	printf("enter data for node: ");
	scanf("%d",&data);
	}
return root;
}

int min(struct node *root)
{
if(root->left==NULL){return root->data;}
min(root->left);
}

int max(struct node *root)
{
if(root->right==NULL){return root->data;}
min(root->right);
}

void display_inorder(struct node *root)
{
if(root==NULL){return;}
display_inorder(root->left);
printf("%d\n",root->data);
display_inorder(root->right);
}

void main()
{
struct node *root;
root=takeinput(root);

//printf("inorder\n");
//display_inorder(root);
printf("min is: %d\n",min(root));
printf("max is: %d\n",max(root));
}
