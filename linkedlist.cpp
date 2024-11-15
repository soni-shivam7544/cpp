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
int main(){
   int temp;
   Node* dummy=new Node(-1);
   Node*curr=dummy;
   while(true){
      cin>>temp;
      if(temp==-1)break;
      Node*newNode=new Node(temp);
      curr->next=newNode;
      curr=curr->next;
   }
   Node*head=dummy->next;
   //display
   curr=head;
   while(curr!=NULL){
      cout<<curr->val<<"->";
      curr=curr->next;
   }
   cout<<"Null";
}