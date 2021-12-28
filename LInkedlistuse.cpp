#include<bits/stdc++.h>
using namespace std;
#include "Linkedlist.cpp"
Node* insertnode(Node*head,int i,int data)
{
    Node *newnode=new Node(data);
    int count=0;
    Node*temp=head;
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!=NULL&&count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
    newnode->next=temp->next;
    temp->next=newnode;
    }
    return head;
}
Node* takeinput()
{
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;

    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
       tail->next=newnode;
       tail=newnode;
       
       
       
        // Node *temp=head;
        // while(temp->next!=NULL)
        // {
        //     temp=temp->next;
        // }
        // temp->next=newnode;
        }
        cin>>data;

    }
    return head;

}
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    // cout<<"printing 2nd time";
    // while(head!=NULL)
    // {
    //     cout<<head->data<<"->";
    //     head=head->next;
    // }
    

}
int main()
{
    Node*head=takeinput();
    print(head);
    int i;
    cin>>i;
    int data;
    cin>>data;
    head=insertnode(head,i,data);
    print(head);
    /*
//     Node n1(10);
//     Node *head=&n1;
//     Node n2(20);
//    Node n3(30);
//    Node n4(40);
//    Node n5(50); 
//    n1.next=&n2;
//    n2.next=&n3;
//    n3.next=&n4;
//    n4.next=&n5;
//    print(head);
//    print(head);
   
   //dynamically
   Node *n1=new Node(10);
   Node *head=n1;
   Node *n2=new Node(10);
   Node *n3=new Node(10);
   Node *n4=new Node(10);
   Node *n5=new Node(10);
   n1->next=n2;
   n2->next=n3;
   n3->next=n4;
   n4->next=n5;
   print(head);


   
   
   
   
   
   
    // Node *head=&n1;
    // cout<<head->data<<" "<<head->next<<endl;
    // Node n2(20);
    // n1.next=&n2;
    // cout<<n1.data<<" "<<n2.data<<endl;
    // cout<<n1.next<<" "<<&n2<<" "<<n2.next;
*/
}