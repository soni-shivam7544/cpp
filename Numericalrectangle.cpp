#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        for(int j=1;j<=i-1;j++){
            cout<<j;
        }
        cout<<endl;
    } 
    return 0;

}