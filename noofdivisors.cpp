#include<iostream>
using namespace std;

int noOfDivisors(int n,int *arr,int l,int r){
    int count=0;
    int flag;
    for(int i=l;i<=r-1;i++){
        flag=1;
        for(int j=l;j<=r-1;j++){

            if(arr[j]%arr[i]!=0){
                flag=0;
            }

        }
        if(flag){ 
            count++;
        }
    }
    return count;
}
int main(){
   int n,l,r;
   cout<<"enter the values of n l & r"<<endl;
   cin>>n>>l>>r;
   int arr[n];
   cout<<"enter the elements of array"<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    
    cout<<noOfDivisors(n,arr,l,r);
    

    return 0;
}