#include<bits/stdc++.h>
struct node{
    int data;
    node *left;
    node *right;
};
struct node *newnode(int x)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->left=new_node->right=0;
    return new_node;

}
struct node* insert(struct node *head,int x)
{
    if(head==NULL)
        return newnode(x);
    else if(x<head->data)
    {
        head->left=insert(head->left,x);
    }
    else
    {
        head->right=insert(head->right,x);
    }
    return head;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node *head=0;
    head=insert(head,30);
    head=insert(head,20);
    head=insert(head,40);
    inorder(head);
    return 0;
}
