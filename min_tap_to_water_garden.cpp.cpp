#define ll long long int
// #include<cstring>
#include<iostream>
#include<climits>
#include<vector>
#include<string.h>

using namespace std;
int dp[10007][10007];
    ll find(int n, vector<int>& ranges,int i,int j){
        if(j>=n)return dp[i][j]=0;
        if(i==n){
            if(i-ranges[i]<=j && i+ranges[i]>=n)return dp[i][j]=1;
            else return dp[i][j]=INT_MAX;
        }
        if(i>n)return dp[i][j]=INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        ll ans=INT_MAX;
        if(i-ranges[i]<=j && ranges[i]!=0)ans=min(find(n,ranges,i+1,i+ranges[i])+1,ans);
        //  return min(ans,find(n,ranges,i+1,j));
        return dp[i][j]=min(ans,find(n,ranges,i+1,j));
    }
    int minTaps(int n, vector<int>& ranges) {
        memset(dp,-1,sizeof dp);
        ll ans=find(n,ranges,0,0);
        return ans==INT_MAX ? -1 : ans;
    }
int main(){
    vector<int>v={3,4,1,1,0,0};
    cout<<endl<<minTaps(5,v);
    // string s="Hello my name is shivam and I am testing on strings.";
    // cout<<sizeof(s);
}
