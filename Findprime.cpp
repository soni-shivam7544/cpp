#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    int flag=0;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            cout<<i;
            flag++;
            break;
        }   
    }
    if(flag){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}