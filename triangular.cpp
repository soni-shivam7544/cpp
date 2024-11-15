#include<iostream>
using namespace std;
int main(){
   int m;
    cout<<"enter the value of m :";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=(2*m-1);j++){
           if((j<=m+i-1)&&(j>=m-i+1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
}
 // for(int i=1;i<=m;i++){
   // for(int j=1;j<=m-i;j++){
     //   cout<<" ";
    //}
    //for(int j=1;j<=2*i-1;j++){
      //  cout<<"*";
    //}
    //cout<<endl; 
 // }
//}