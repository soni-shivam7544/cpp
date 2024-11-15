#include<iostream>
using namespace std;
int main(){
    int a[3]={1,4,3};
    int(*p)[3]=&a;
  //  int*((*p)[3])[2];
    //p[3][2]={1,2,3,4,5,6};
    cout<<*p<<" "<<**(p+1)/*garbage value*/<<" "<<p<<" "<<p+2<<"\n"<<*(*p+1);
    cout<<*p[3];
    return 0;
}
//a[3]==*(a+3)->always true