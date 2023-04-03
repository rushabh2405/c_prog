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

struct node *create_tree(struct node *root)
{
    int data;
    printf("enter data for node: ");
    scanf("%d",&data);
    if(data==-1)
    {return NULL;}
    root=create_node(data);
    root->left=create_tree(root->left);
    root->right=create_tree(root->right);
    return root;
}

void display_inorder(struct node *root)
{
if(root==NULL){return;}
display_inorder(root->left);
printf("%d\n",root->data);
display_inorder(root->right);
}

void display_pre(struct node *root)
{
if(root==NULL){return;}
printf("%d\n",root->data);
display_inorder(root->left);
display_inorder(root->right);
}

void display_post(struct node *root)
{
if(root==NULL){return;}
display_inorder(root->left);
display_inorder(root->right);
printf("%d\n",root->data);
}

int heightTree(struct node* root)
{
    int x,y;
    if(root==NULL)
    {return 0;}

    x=heightTree(root->left);
    y=heightTree(root->right);
    if(x>y){return x+1;}
    else{return y+1;}
}

void isbalanced(Struct node *root)
{
int h1=height(root->left);
int hr=height(root->right);
if(abs(h1-hr)<=1)
	{
	printf("tree is balanced");
	}
else
	{
	printf("tree is not balanced");
	}
}

struct node* swapTree(node* root)
{
node* temp;
if(root==NULL)
{return NULL;}
root->left=swapTree(root->left);
root->right=swapTree(root->right);
temp=root->left;
root->left=root->right;
root->right=temp;
return root;
}

struct node* takeinput(node* root)
{
int data;
printf("enter data for node: ");
scanf("%d",&data);
while(data!=-1)
	{
	insert_bst(root,data);
	printf("enter data for node: ");
	scanf("%d",&data);
	}
}

void main()
{
struct node *root=NULL;
root=create_tree(root);
printf("inorder : \n");
display_inorder(root);
printf("preorder : \n");
display_pre(root);
printf("postorder : \n");
display_post(root);
}

