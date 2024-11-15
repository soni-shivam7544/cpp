#include<iostream>
using namespace std;
int main(){
    long int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    if(a<b){
        cout<<"a is "<<a<<" and b is "<<b<<endl;
        cout<<"a is smaller than b"<<endl;
    }
    else{
        if(a==b){
            cout<<"a is "<<a<<" and b is "<<b<<endl;
            cout<<"a and b are equal"<<endl;
        }
        else{
            cout<<"a is "<<a<<" and b is "<<b<<endl;
            cout<<"a is greater than b"<<endl;
        }
    }
    return 7;
}

    
