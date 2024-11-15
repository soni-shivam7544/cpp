// #include<iostream>
// using namespace std;
// class Node{
//    public:
//    int val;
//    Node* next;
//    Node(int data){
//       val=data;
//       next=NULL;

//    }
// };

// class LinkedList{
//     public:
//     Node* head=NULL;
    
//     void insertNode(int val){
//         Node* newNode=new Node(val);
//         if(head==NULL){
//             head=newNode;
//         }
//         else if(head->next==NULL){
//             head->next=newNode;
//         }
//         else{
//             Node*temp=head;
//             while(temp->next!=NULL){
//                 temp=temp->next;
//             }
//             temp->next=newNode;
//         }
//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"null";
//     }
    
// };
// void display(Node*head){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"null";
//     }
// Node* mergeSorted(Node* head1,Node*head2){
//     //Bekar Code(Very Poor)
//     Node*head=NULL;
//     Node*ptr1=head1;
//     Node*ptr2=head2;
//     ((ptr1->val)>( ptr2->val))?(head=ptr2):(head=ptr1);
//     while((ptr1!=NULL )&&(ptr2!=NULL)&&(ptr1->next!=NULL)&&(ptr2->next!=NULL)){
//         if((ptr1->val)>(ptr2->val)&&(ptr2->next->val)<(ptr1->val)){
//             ptr2=ptr2->next;
//         }
//         else if((ptr1->val)>(ptr2->val)&&(ptr2->next->val)>(ptr1->val)){
//             Node*temp=ptr2->next;
//             ptr2->next=ptr1;
//             ptr2=temp;
//         }
//         else if((ptr1->val)<(ptr2->val)&&(ptr1->next->val)<(ptr2->val)){
//             ptr1=ptr1->next;
//         }
//         else {
//             Node*temp=ptr1->next;
//             ptr1->next=ptr2;
//             ptr1=temp;
//         }
        
//     }
//     if(ptr1->next){
//         ptr2->next=ptr1;
//     }
//     else{
//         ptr1->next=ptr2;
//     }
//     return head;
// }

// int main(){
//    LinkedList l1;
//    LinkedList l2;
//    l1.insertNode(5);
//    l1.insertNode(6);
//    l1.insertNode(8);
//    l1.insertNode(10);
//    l1.insertNode(15);
//    l1.insertNode(16);
//    l2.insertNode(1);
//    l2.insertNode(2);
//    l2.insertNode(4);
//    l2.insertNode(7);
//    l1.display();
//    cout<<endl;
//    l2.display();
//    cout<<endl;

//    Node*head=mergeSorted(l1.head,l2.head);
   
//   display(head);
    
// }
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void sorting(vector<int>&v){
    int n=v.size();
    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz){
            v[i]=0;
        }
        else v[i]=1;
    }
    return;
    
}
int findNoOfStairPaths(int num){
    if(num==2 || num==1)return num;
    return findNoOfStairPaths(num-1)+findNoOfStairPaths(num-2);
}
void reOrder(int arr[],int n){
    int ptr1=n-2;
    int ptr2=n-1;
    while(ptr1>=0){
        while(arr[ptr1]==0 && ptr1>=0)ptr1--;
        if(ptr1>=0 && arr[ptr2]==0){
            int temp=arr[ptr1];
            arr[ptr1]=arr[ptr2];
            arr[ptr2]=temp;
        }
        ptr2--;
        if(ptr1>ptr2)ptr1--;
    }
}

void print(int n){
    if(n==0)return;
    print(n-1);
    cout<<n<<endl;
}
int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1);
}
int main(){
    //  vector<int>v;
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    // sorting(v);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }
    // string str="hello shivam soni how are you?";
    // cout<<str;
    // vector<int> *v= new vector<int>();
    // v->push_back(1);
    // v->push_back(2);
    // v->push_back(3);
    // v->push_back(4);
    // int a=(v->front());
    // for(int i=0;i<v->size();i++){
    //     cout<< (*v)[i];
    // }
    // char ch[4]={'f','g','h','g'};
    // cout<< ch <<endl;
    

    // int arr[]={55,0,21,0,63,0,45,0};
    // reOrder(arr,8);
    // for(int i=0;i<8;i++){
    //     cout<<arr[i]<<" ";
    // }
    // if(9>5 & 9<8) cout<<1;
    // else cout<<0;


    // int a =4;
    // cout<<&a<<" "<<a<<endl;
    // for (int a = 0; a < 2; a++){
    //     cout<<a<<" "<<&a<<endl;
    // }

    int n=647;
    // print(4);
    // cout<<endl<<endl<<sum(n)<<endl;
    // cout<<n*(n+1)/2;
   
    int num;
    cin>>num;
    if (num >= 100 && num <= 999) {

    if (num % 5 == 0 || num % 3 == 0) {

        cout << "Valid";

    } else {

        cout << "Invalid";

    }

} else {

    cout << "Not a 3-digit number";

}
    return 0;

    
}
