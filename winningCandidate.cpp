#include<iostream>
#include<string>
using namespace std;
char winningCandidate(string &qu){
    int n=qu.length();
    int i=0;
    while(i<n){
        if(qu[i]=='-'){
            int str=i;
            while( i<n && qu[i]=='-')i++;
            int end=i-1;
            int last=end-1;
            while(str<end){
                int f=0;
                if(str-1>=0 && qu[str-1]=='B'){
                    qu[str]='B';
                    str++;
                    f++;
                }
                if(end+1<n && qu[end+1]=='A'){
                    qu[end]='A';
                    end--;
                    f++;
                }
                if(f==0)break;
            }
            if(str==0 || end==n-1){
                if(str==0 && qu[str+1]=='A')qu[str]='A';
                if(end==n-1 && qu[end-1]=='B')qu[end]='B';
            }
            i=last;
        }
        i++;
        
    }
    int countA=0,countB=0;
    for(int i=0;i<n;i++){
        if(qu[i]=='A')countA++;
        if(qu[i]=='B')countB++;
    }
    if(countA>countB)return 'A';
    else if(countB>countA)return 'B';
    else return '-';
}
int main(){
    string s;
    cin>>s;
    cout<<winningCandidate(s);
    cout<<endl<<s;


}