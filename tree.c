#include <stdio.h>
#include <stdlib.h>

struct abc
{
int data;
struct abc *left;
struct abc *right;
//struct abc *next;
};

struct abc* newnode(int);
void inorder(struct abc*);
void preorder(struct abc*);
void postorder(struct abc*);
void main()
{
struct abc *root;
root = newnode(1);
root->left = newnode(2);
root->right= newnode(3);
root->left->left = newnode(4);
root->left->right = newnode(5);
printf("Element in inorder : ");
inorder(root);
printf("\n");
printf("Element in preorder : ");
preorder(root);
printf("\n");
printf("Element in postorder : ");
postorder(root);
printf("\n");

}


struct abc* newnode(int a)
{
struct abc* temp;
temp = (struct abc*)malloc(sizeof(struct abc));
temp->data=a;
temp->left=NULL;
temp->right=NULL;
return temp;
}

void inorder(struct abc *root)
{
if(root == NULL)
return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}

void preorder(struct abc *root)
{
if(root == NULL)
return;
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}

void postorder(struct abc *root)
{
if(root == NULL)
return;
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}

