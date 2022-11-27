#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        data=d;
        right=left=NULL;
    }

};

node *buildtree()
{
    int d;
    cin>>d;

    if(d==-1)
    {
        return NULL;
    }

    node *n=new node(d);
    n->left=buildtree();
    n->right=buildtree();

    return n;

}

void printpreorder(node *root)//printing root first then left subtree and then right subtree.
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
void printinorder(node *root)//printing first left subtree then root and then right subtree.
{
    if(root==NULL )
    {
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
   printinorder(root->right);

}
void postorder(node *root)//printing left subtree first then right subtree and then root.
{
    if(root==NULL)
    {
        return;

    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelorder(node *root)//printing nodes according to levels by breadth first search(BFS) and using queue.
{
    queue<node *>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node *temp=q.front();

        if(temp==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {

            cout<<temp->data<<" ";
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

    }

    return;
}



int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int c1=height(root->left);
    int c2=height(root->right);

    return 1+max(c1,c2);
}

int diameter(node *root)//time complexity : o(N*2)
{
    if(root==NULL)
    {
        return 0;
    }
    int d1=height(root->left)+height(root->right);
    int d2=diameter(root->left);
    int d3=diameter(root->right);

    return max(d1,max(d2,d3));

}


class hdpair
{
public:
    int height;
    int diameter;
};

hdpair optdiameter(node *root)//time complexity : o(N) , height and diameter both are calculated.
{
    hdpair p;

    if(root==NULL)
    {
        p.height=p.diameter=0;
        return p;
    }

    hdpair left=optdiameter(root->left);
    hdpair right=optdiameter(root->right);

    p.height=max(left.height,right.height)+1;

    int d1= left.height+right.height;
    int d2=left.diameter;
    int d3=right.diameter;

    p.diameter=max(d1,max(d2,d3));

    return p;
}
int main()
{
   node *root=buildtree();

   printpreorder(root);
   cout<<endl;
   printinorder(root);
   cout<<endl;
   postorder(root);
   cout<<endl<<endl<<endl;
   levelorder(root);
   cout<<endl;

   cout<<diameter(root)<<endl;
   cout<<optdiameter(root).diameter<<endl;
    return 0;
/*1 ->sample input.
2
4
-1
-1
5
7
-1
-1
-1
3
6
-1
-1
-1
*/

}
