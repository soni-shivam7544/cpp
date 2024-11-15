#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n=7;
   // cout<<"enter the value of n"<<endl;
  //  cin>>n;
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n;j++){
            if (j>=i && j<=n-1-i) cout<< 4-i;
            else if (j<i) cout <<4-j;
            else cout<<5+j-n;
        }
        cout<<endl;
    }
    for(int i=n/2-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if (j>=i && j<=n-1-i) cout<< 4-i;
            else if (j<i) cout <<4-j;
            else cout<<5+j-n;
        }
        cout<<endl;
    }
}


    