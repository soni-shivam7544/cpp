#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int matrixChainCost(vector<int>arr){
    if(arr.size()==2)return 0;
    if(arr.size()==3)return arr[0]*arr[1]*arr[2];
    int min= INT_MAX;
    for(int i=1;i<arr.size()-1;i++){
        int sum=arr[i-1]*arr[i]*arr[i+1];
         vector<int> arr2=arr;
        arr2.erase(arr2.begin()+i);
        sum+=matrixChainCost(arr2);
       
        if(min>sum)min=sum;
    }
    return min;
}
int main(){
    vector<int>arr={40,20,30,10,30};
    cout<<matrixChainCost(arr);
}