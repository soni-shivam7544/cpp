#include<iostream>
#include<vector>
using namespace std;
vector<int>display(vector<int>&v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void swap(vector<int>&v,int i,int j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
void sort(vector<int>&v){
    int ptr1=0,ptr2=v.size()-1,ptr=0;
    while(ptr<=ptr2){
        if(v[ptr]==0){
            swap(v,ptr,ptr1);
            ptr1++;
            if(ptr<ptr1){
                ptr++;
            }    
        }
        if(v[ptr]==2){
            swap(v,ptr,ptr2);
            ptr2--;
        }
        if(v[ptr]==1)
            ptr++;
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);


    display(v);
    sort(v);
    display(v);
}