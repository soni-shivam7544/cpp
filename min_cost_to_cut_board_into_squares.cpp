#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int M=6,N=4;
    // cin>>M>>N;
    vector<int> x={2,1,3,1,4};
    vector<int> y={4,1,2};
    // for(int i=0;i<M-1;i++){
    //     cin>>x[i];
    // }
    // for(int i=0;i<N-1;i++){
    //     cin>>y[i];
    // }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    // for(int i=0;i<M-1;i++){
    //     cout<<x[i];
    // }
    // for(int i=0;i<N-1;i++){
    //     cout<<y[i];
    // }
    int i=M-2;
    int j=N-2;
    int rowParts=1,colParts=1;
    int sum=0;
    while(i>=0 && j>=0){
        if(x[i]>y[j]){//x[i]*colParts+y[j]*(rowParts+1)<x[i]*(colParts+1)+y[j]*(rowParts)->First I thought this way then I found that observation more useful
            sum+=x[i]*colParts;
            rowParts++;
            i--;
            
            
        }
        else{
            sum+=y[j]*rowParts;
            colParts++;
            j--;
            

        }
        
    }
    while(j>=0){
        sum+=rowParts*y[j];
        j--;
    }
    while(i>=0){
        sum+=rowParts*x[i];
        i--;
    }
    cout<<sum<<endl;


    
}