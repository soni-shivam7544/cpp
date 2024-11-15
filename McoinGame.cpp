// https://www.spoj.com/problems/MCOINS/

#include <iostream>
#include<vector>
using namespace std;
int arr[3]={1,2,3};
int canWin(int n, vector<int> &dp){
    if(n==1 || n==2 || n==3){
        return dp[n]=1;
    }
    if(dp[n]!=-1)return dp[n];
    for(int i=0;i<3;i++){
        int num=n-arr[i];
        if(num<0)continue;
        if(num==0)return dp[n]=1;
        int flag=0;
        for(int j=0;j<3;j++){
            if(num-arr[j]<0){
                flag++;
                continue;
            }
            if(num-arr[j]==0 || canWin(num-arr[j],dp)==0)break;
            flag++;
        }
        if(flag==3)return dp[n]=1;
    }
    return dp[n]=0;
}
int canWin2(int n,vector<int>&dp){
    for(int i=0;i<3;i++){
        int num=n-arr[i];
        if(num<0)continue;
        if(num==0)return dp[n]=1;
        int flag=0;
        for(int j=0;j<3;j++){
            if(num-arr[j]<0){
                flag++;
                continue;
            }
            if(num-arr[j]==0 || canWin(num-arr[j],dp)==0)break;
            flag++;
        }
        if(flag==3)return dp[n]=1;
    }
    return dp[n]=0;
}
int main(){

     int n=100000;
    vector<int>dp(1000007,-1);
    
    dp[1]=dp[2]=dp[3]=1;
   for(int k=4;k<=n;k++){
    for(int i=0;i<3;i++){
        int num=k-arr[i];
        if(num<0)continue;
        if(num==0){
            dp[k]=1;
            break;
        }
        int flag=0;
        for(int j=0;j<3;j++){
            if(num-arr[j]<0){
                flag++;
                continue;
            }
            if(num-arr[j]==0 || dp[num-arr[j]]==0)break;
            flag++;
        }
        if(flag==3){
            dp[k]=1;
            break;
        }
    }
    if(dp[k]==-1) dp[k]=0;
   }

   cout<<dp[100]<<endl;
}