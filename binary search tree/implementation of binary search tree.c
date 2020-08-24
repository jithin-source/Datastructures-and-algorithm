// C program to demonstrate  binary search tree.
#include<stdio.h>
#include<stdlib.h>
// creating a struct node with 2 pointer and a key
struct node
{
    struct node *left;
    int key;
    struct node *right;
};
struct node *newNode(int item)  //creating a new node
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); // creating in heap
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root) // inorder display
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \t", root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key) // if key is less then  left node
    {
      node->left  = insert(node->left, key);
    }
    else if (key > node->key) // if key is greater then right node
        {
           node->right = insert(node->right, key);
        }
    return node;
}
struct node* search(struct node* root,int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(key == root->key)
    {
        return root;
    }
    else if(key <root->key)
    {
      return  search(root->left,key);
    }
    else
    {
      return  search(root->right,key);
    }
} ;
void Delete(struct node* *root,int key)
{
    struct node* temp = search(root,key);
    free(temp);
}
int main()
{
    struct node *root = NULL;
    int key;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    printf("Enter the element to be search:");
    scanf("%d",&key);
    printf("Element is found in %d",search(root,key));
    Delete(&root);
    printf(" \nElement in binary tree ");
    inorder(root);
    return 0;
}
