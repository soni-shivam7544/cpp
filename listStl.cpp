#include<iostream>
#include<list>

using namespace std;
void displayLL(list<int>&ll){
    int n=ll.size();
    for(int i=0;i<n;i++){
        int val=ll.front();
        cout<<val<<" ";
        ll.push_back(val);
        ll.pop_front();

    }
    cout<<endl;
}
int main(){
    list<int>ll;
    ll.push_back(17);
    ll.push_back(27);
    ll.push_back(37);
    ll.push_back(47);
    ll.push_back(57);
    ll.push_back(67);
    int n= ll.size();

    // list<int>::iterator it;

    // for (it = ll.begin(); it != ll.end(); ++it)
    //     cout <<*it<<" ";
    // cout <<endl;
     displayLL(ll);
     displayLL(ll);
}