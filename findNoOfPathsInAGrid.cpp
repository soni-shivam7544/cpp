#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int findPath(int i,int j,int m,int n){
    if((i==m-1)||j==n-1) return 1;
    int x=findPath(i,j+1,m,n);
    int y=findPath(i+1,j,m,n);
    return x+y;

}
int main(){
    int m=4,n=5;
    int ans=findPath(0,0,m,n);
    cout<<ans;




    return 0;
}