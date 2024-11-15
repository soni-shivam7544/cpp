#include<iostream>
using namespace std;
void display(int arr[6]){
    
}
int main(){
    int arr[6]={3,4,5,3,32,2};
    int (*ptr)[6]=&arr;
    // display(*ptr);

    long long num=6546535465;
    string str=to_string(num);
    cout<<str;
}