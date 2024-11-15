#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int rev(int x){
        int reverse=0;
        while(x!=0){
            int lst=x%10;
            reverse=reverse*10+lst;
            x/=10;
        }
        return reverse;
    }
int countNicePairs(vector<int>& v) {
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<v.size();i++){
            mp[i]=rev(v[i])-v[i];
        }
        
        for(int i=0;i<v.size();i++){
           mp.erase(mp[i]);
           
          
           if(mp.find(rev(v[i])-v[i])!=mp.end()){
            cout<<++count;
             
           }
           cout<<endl;
        }
        return count;
    }
int main(){
    vector<int>v={42,11,1,97};
    cout<<countNicePairs(v)<<endl;
}