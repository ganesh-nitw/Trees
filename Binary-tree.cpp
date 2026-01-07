//Binary Trees
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
};
void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* first=new node();
    node* two=new node();
    node* three=new node();
    node* four=new node();
    node* five=new node();
    node* six=new node();
    node* seven=new node();
    first->data=5;
    first->left=two;
    first->right=three;
    two->data=10;
    two->left=four;
    two->right=five;
    three->data=15;
    three->left=six;
    three->right=seven;
    four->data=20;
    four->left=NULL;
    four->right=NULL;
    five->data=25;
    five->left=NULL;
    five->right=NULL;
    six->data=30;
    six->left=NULL;
    six->right=NULL;
    seven->data=35;
    seven->left=NULL;
    seven->right=NULL;
    node* root=new node();
    root=first;
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
}
