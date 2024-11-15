#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,12,2,5,6,7,4,12};
    int n=8;
    int max=arr[0];
    int secondmax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else{
            if(arr[i]>secondmax && arr[i]!=max)
            secondmax=arr[i];
        }
    } 
    cout<<secondmax<<endl;   
}
   