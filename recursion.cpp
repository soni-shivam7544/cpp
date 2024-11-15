#include<iostream>
using namespace std;
int maximumElementOfArray(int*arr,int ind,int n,int &max){
    if(max<arr[ind]){
        max=arr[ind];
    }
    if(ind==n-1){
        return max;
    }
    return maximumElementOfArray(arr,ind+1,n,max);
}
int main(){
    int max=0;
    int arr[]={1,0,6,48,3,2,56,7,89,4,2,3,4,56,78,66,99,66,43,24};
    int n=20;
    cout<<"maximum element of the array is : "<<maximumElementOfArray(arr,0,n,max);
    return 0;
}