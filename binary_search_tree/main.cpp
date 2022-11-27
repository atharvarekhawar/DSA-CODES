#include <iostream>
#include <vector>
using namespace std;
class node
{
    public:
    int key;
    node *left;
    node *right;

    node(int key)
    {
       this->key=key;
       left=right=NULL;
    }
};

node *insertt(node *root,int key)
{
    if(root==NULL)
    {
        return new node (key);
    }
    if(key<root->key)
    {
        root->left=insertt(root->left,key);
    }
    else
    {
        root->right=insertt(root->right,key);
    }

    return root;
}
void printinorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }

    printinorder(root->left);
    cout<<root->key<<" ";
    printinorder(root->right);
}

bool searchh(node *root,int k)
{

    if(root==NULL)
    {
        return false;

    }
    if(root->key==k)
    {

        return true;
    }

    if(k<root->key)
    {
        return searchh(root->left,k);
    }
    if(k>root->key)
    {
        return  searchh(root->right,k);
    }


}
node *findmin(node *root)//it gives minimum element from right subtree which needs to be replaced with deleting node.
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}
node * removee(node *root,int k)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if (k<root->key)
    {
        root->left=removee(root->left,k);
    }
    else if(k>root->key)
    {
        root->right=removee(root->right,k);
    }

    else
    {
        if(root->left==NULL && root->right==NULL)//leaf node case
        {
            delete root;
            root=NULL;
        }
       else if(root->left==NULL)//node with one children
       {
           node *temp=root;
           root=root->right;
           delete temp;
       }
       else if(root->right==NULL)//node with one children
       {
           node *temp=root;
           root=root->left;
           delete temp;
       }
       else{
        node *temp=findmin(root->right);
        root->key=temp->key;
        root->right=removee(root->right,temp->key);
       }

       return root;
}
}

void printrange(node * root,int k1,int k2)
{
    if(root==NULL)
    {
        return;
    }

     if(root->key>=k1 && root->key<=k2)
    {
        printrange(root->left,k1,k2);
        cout<<root->key<<" ";
        printrange(root->right,k1,k2);
    }
    else if(root->key>k2)
    {
        printrange(root->left,k1,k2);
    }
    else
    {
        printrange(root->right,k1,k2);
    }
}

void printroot2leaf(node *root,vector<int>&path)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        for(int i=0;i<path.size();i++)
        {
            cout<<path[i]<<"->";
        }
        cout<<root->key;

        cout<<endl;

    }

    path.push_back(root->key);
    printroot2leaf(root->left,path);
    printroot2leaf(root->right,path);

    path.pop_back();
    return;
}

int main()
{
   node *root=NULL;
   int arr[]={8,3,10,1,6,14,4,7,13};
   int size=sizeof(arr)/sizeof(int);
   vector<int>v;

   for(int i=0;i<size;i++)
   {
       root=insertt(root,arr[i]);
   }

  // printinorder(root);
   cout<<endl;
  // int k;
  // cin>>k;
   //root=removee(root,k);
    printinorder(root)  ;
    cout<<endl;

   //cout<<searchh(root,9 );
   //printrange(root,5,12);
   cout<<endl;
   printroot2leaf(root,v);
    return 0;
}
