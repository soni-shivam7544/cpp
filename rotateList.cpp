#include<iostream>
using namespace std;
class Node{
   public:
    int val;
    Node* next;
    Node(int data){
       val=data;
       next=NULL;
    }
};
void insertAtTail(Node* &head,int val){
    Node* n=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void rotateList(Node* &head,int k){
   
    for(int i=0;i<k;i++){
         Node*temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next->next=head;
        head=temp->next;
        temp->next=NULL;
    }
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}

int main(){
    int k;
Node* n=new Node(5);
insertAtTail(n,4);
insertAtTail(n,3);
insertAtTail(n,2);
insertAtTail(n,1);
display(n);
cout<<endl;
cout<<"enter the value of k\n";
cin>>k;
rotateList(n,k);
display(n);

}