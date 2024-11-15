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
bool checkCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast->next->next!=NULL&&fast->next!=NULL){
        if(fast==slow)return true;
    }
    return false;
}