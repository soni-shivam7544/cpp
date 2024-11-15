#include<iostream>
using namespace std;
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
int main(){
    int arr[]={5,0,18,0,15,0,1,20};
    reOrder(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    // cout<<(true)^(false);
}