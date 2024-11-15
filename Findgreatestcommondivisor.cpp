#include<iostream>
using namespace std;
int main(){
    int num1,num2,flag=0;
    cin>>num1>>num2;
    int smaller,bigger;
    if(num1>num2){
        smaller=num2;
        bigger=num1;
    }
    else{
        smaller=num1;
        bigger=num2;
    }
    for(int i=1;i<=smaller/2;i++){
        if(smaller%i==0){
            int divisor=smaller/i;
            if(bigger%divisor==0){
                cout<<divisor<<endl;
                flag++;
                break;
            }
        }
    }
    if(flag!=1){
        cout<<1<<endl;
    }
    return 0;
}