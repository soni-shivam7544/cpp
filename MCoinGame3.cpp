#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int dp[1000005];

int canWin(int n, int k, int l){
    if(dp[n]!=-1)return  dp[n];
    if(n==1 ||n==k ||n==l)return dp[n]=1;
    
    if((n-1>=0 && canWin(n-1,k,l)==0) ||(n-k>=0 && canWin(n-k,k,l)==0) || (n-l>=0 && canWin(n-l,k,l)==0))return dp[n]=1;
    return dp[n]=0;
    // if((n-1>=0 && canWin(n-1, k, l)) && (n-k>=0 && canWin(n-k, k, l)) && (n-l>=0 && canWin(n-l, k, l)))return dp[n]=0;
    // return dp[n]=1;
    
}
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    memset(dp,-1,sizeof(dp));
    file_i_o();
    int m;
    cin>>m;
    // vector<int>dp(m+m,-1);
    cout<<canWin(m,2,3);
    // for(int i=0;i<m;i++){
    //     int n;
    //     cin>>n;
    //     if(dp[n]==1){

    //         cout<<dp[n]<<" A";
    //     }
    //     else{
    //         cout<<dp[n]<<" B";
    //     }
    // }
   
}