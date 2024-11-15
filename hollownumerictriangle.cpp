#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the number of rows :"<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=1;j<=(2*m-1);j++){
            if(i!=m-1){
                if((j==m-i)||(j==m+i)){
                  cout<<i+1;
                }
                else{
                  cout<<" ";
                }
            }
            if(i==m-1){
                if((j>=m-i)&&(j<=m+i)){
                 cout<<i+1;
                }
                else{
                  cout<<" ";
                }
            } 
                  
        }
        cout<<endl;
    }
    return 0;
}