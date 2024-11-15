#include<iostream>
#include<vector>
using namespace std;
int main(){
    int o;
    cin>>o;
    int arr[o][o];
    int i=0, j=o-1, k=0, l=o-1;
    int size=o;
    int n=4;
    while(true){
        if(k>l)break;
        for(int s=k;s<=l;s++){
            arr[i][s]=n;
        }i++;
        if(k>l)break;
        for(int s=i;s<=j;s++){
            arr[s][l]=n;
        }l--;
        if(k>l)break;
        for(int s=l;s>=k;s--){
            arr[j][s]=n;
        }j--;
        if(k>l)break;
        for(int s=j;s>=i;s--){
            arr[s][k]=n;
        }k++;
        n--;
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }



}
