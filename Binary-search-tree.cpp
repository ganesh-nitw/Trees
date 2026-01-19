#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* right;
    node* left;
};
node* create(int value)
{
    node* node1=new node();
    node1->data=value;
    node1->right=NULL;
    node1->left=NULL;
    return node1;
}
node* insert(node* head,int value)
{
    if(head==NULL)
    {
        node* head=create(value);
        return head;
    }
    if(head->data<value)
    {
        if(head->right==NULL)
        {
            node* node1=create(value);    
            head->right=node1;
            return head;
        }
        insert(head->right,value);
            return head;
    }
    if(head->data>value)
    {
        if(head->left==NULL)
        {
            node* node1=create(value);
            head->left=node1;
            return head;
        }
        insert(head->left,value);
        return head;
    }
    return head;
}
void display(node* head)
{
    if(head==NULL)
    {
        return;
    }
    display(head->left);
    cout<<head->data<<endl;
    display(head->right);
}
int main()
{
    node* head=NULL;
    head=insert(head,10);
    head=insert(head,15);
    head=insert(head,20);
    head=insert(head,13);
    head=insert(head,25);
    head=insert(head,17);
    head=insert(head,8);
    head=insert(head,5);
    display(head);
}
