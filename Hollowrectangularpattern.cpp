#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of m:";
    int m;
    cin>>m;
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i>1 && i<m && j>1 && j<n){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}