#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *insertt(node *root,int d)
{
    node *new_node=new node();
    new_node->data=d;
    new_node->next=NULL;
    if(root==NULL)
        root=new_node;
    else
    {
        node *p=root;
        while(p->next!=NULL)
            p=p->next;
        p->next=new_node;
    }
    return root;
}
int main()
{
    cout<<"Enter no of nodes in the graph"<<endl;
    int v;
    cin>>v;
    node *head[v];//for maintaining adjacency list
    vector<int>f(v);//for maintaing the flag - 0 for not visited,1 for visited,intially intialized to 0
    for(int i=0;i<v;i++)
    {
        string str;
        if(i==0)
            str="st";
        else if(i==1)
            str="nd";
        else if(i==2)
            str="rd";
        else
            str="th";
        cout<<"Enter number of node  to which "<<i+1<<str<<" node is linked"<<endl;
        int k;
        cin>>k;
        cout<<"Enter node Numbers to which " <<i+1<<str<<" node is linked"<<endl;
        node *new_node=new node();
        new_node->data=i+1;
        new_node->next=head[i];
        head[i]=new_node;
        node *p=NULL;
        for(int j=0;j<k;j++)
        {
            int y;
            cin>>y;
            p=insertt(p,y);
        }
        new_node->next=p;
    }
    cout<<"Adjacency list representation of the above graph is:-\n"<<endl;
    for(int i=0;i<v;i++)
    {
        node *p=head[i];
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
    cout<<endl<<"Breadth first traversal for the above graph is:-"<<endl;
    queue<node*>q;
    q.push(head[0]);
    while(!q.empty())
    {
        if(f[q.front()->data-1]==0)
        {
            cout<<q.front()->data<<" ";
            f[q.front()->data-1]=1;
            node *p=head[q.front()->data-1];
            p=p->next;
            while(p!=NULL)
            {
                if(f[p->data-1]==0)
                    q.push(head[p->data-1]);
                p=p->next;
            }
        }
        else
        {
            node *p=head[q.front()->data-1];
            p=p->next;
            while(p!=NULL)
            {
                if(f[p->data-1]==0)
                    q.push(head[p->data-1]);
                p=p->next;
            }
        }
        q.pop();
    }
    return 0;
}
