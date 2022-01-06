#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int> *TakeinputLevelWise()
{
    int rootdata;
    cout<<"Enter the rootdata: ";
    cin>>rootdata;
    TreeNode<int> *root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>*front=pendingNodes.front();
        pendingNodes.pop();
        int numchild;
        cout<<"Enter the No. of child of "<<front->data<<" : ";
        cin>>numchild;
        for(int i=0;i<numchild;i++)
        {
            int data;
            cout<<"Enter the data of"<<i<<"th child of "<<front->data<<": ";
            cin>>data;
            TreeNode<int> *child=new TreeNode<int>(data);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
TreeNode<int> *Takeinput()
{
    int rootdata;
    cout<<"Enter the data : ";
    cin>>rootdata;
    TreeNode<int> *root=new TreeNode<int>(rootdata);
    int n;
    cout<<"Enter the noo. of children of "<<rootdata<<": ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child=Takeinput();
        root->children.push_back(child);
    }
    return root;
}



void PrintTree(TreeNode<int> *root)
{
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        PrintTree(root->children[i]);
    }
}
int main()
{
    /*
    TreeNode<int> *root=new TreeNode<int>(1);
    TreeNode<int> *node1=new TreeNode<int>(2);
    TreeNode<int> *node2=new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    */
    TreeNode<int> *root=TakeinputLevelWise();
    PrintTree(root);



}