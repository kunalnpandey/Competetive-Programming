#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *head;
void insert(int x)
{
    node *new_node=new node();
    new_node->data=x;
    new_node->right=new_node->left=0;
    if(head==NULL)
    head=new_node;
    else
    {
        node *ptr=head;
        while(1)
        {
            if(ptr->data<x&&ptr->right!=NULL)
                ptr=ptr->right;
            else if(ptr->data<x&&ptr->right==NULL)
            {
                ptr->right=new_node;
                break;
            }
            else if(ptr->data>=x&&ptr->left!=NULL)
                ptr=ptr->left;
            else if(ptr->data>=x&&ptr->left==NULL)
            {
                ptr->left=new_node;
                break;
            }
        }
    }
}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<"    ";
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<"    ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<"    ";
    }
}
int main()
{
    head=NULL;
    while(1)
    {
        printf("\t\t1:-Insert\n\t\t2:-Tree Travresal\n\t\t3:-Exit\n");
        int n;
        scanf("%d",&n);
        system("cls");
        switch(n)
        {
            case 1:{
                        int x;
                        scanf("%d",&x);
                        insert(x);
                        break;
                    }
            case 2:{
                    system("cls");
                    int i=1;
                    while(i==1)
                    {
                        printf("\t\t\t1:-Inorder Traversal\n\t\t\t2:-Preorder Traversal\n\t\t\t3:-Postorder Traversal\n\t\t\t4:-Exit\n");
                        int x;
                        cin>>x;
                        switch(x)
                        {
                            case 1:{
                                    cout<<"The Inorder Traversal of Tree is:-"<<endl;
                                    inorder(head);
                                    cout<<endl;
                                    break;
                                    }
                            case 2:{
                                    cout<<"The Preorder Traversal of Tree is:-"<<endl;
                                    preorder(head);
                                    cout<<endl;
                                    break;
                                    }
                            case 3:{
                                    cout<<"The Postorder Traversal of Tree is:-"<<endl;
                                    postorder(head);
                                    cout<<endl;
                                    break;
                                    }
                            case 4:{
                                    system("cls");
                                    i++;
                                    }

                        }
                    }
                    break;
                    }
            case 3:return 0;
            default:printf("Enter the correct choice no.\n");
                    break;
        }
    }
}
