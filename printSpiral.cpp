#include<iostream>
#include<vector>
using namespace std;
void display(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void printSpiral(vector<vector<int>>&v){
    int r=0,s=1,i=0,j=0;
    int p=v[0].size(),q=v.size();
    for(int k=0;k<v.size();k++){
        if(k%2==0){
            while(j<p){
                cout<<v[i][j]<<" ";
                j++;
            }
            j--; i++;
            p=r;
            while(i<q){
                cout<<v[i][j]<<" ";
                i++;
            }
            i--;j--;
            q=s;
        }
        else{
            while(j>=p){
                cout<<v[i][j]<<" ";
                j--;
            }
            j++;i--;r++;
            p=v[0].size()-r;
            while(i>=s){
                cout<<v[i][j]<<" ";
                i--;
            }
            i++;j++;
            q=v.size()-s;
            s++;
        }
    }
}
int main(){
    vector<vector<int>>v={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
   

    display(v);
    printSpiral(v);
   
}
