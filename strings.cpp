#include<iostream>
#include<string>
using namespace std;
int count(string str,char var){
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==var){
            count++;
        }
    }
    return count;

}
bool isIsomorphic(string str1,string str2){
    if(str1.size()==str2.size()){
      for(int i=0;i<str1.size();i++){
        if(count(str1,str1[i])==count(str2,str2[i])){
            for(int j=0;j<str1.size();j++){
               if(str1[j]==str1[i] && str2[j]!=str2[i]){
                    return false;
               } 
            }
        }
        else{
            return false;
        }
      }
      return true;
    }
    else{
        return false;
    }
}
int main(){
    string str1="asgfggf";
    string str2="akhghhg";
    if(isIsomorphic(str1,str2)){
        cout<<"yes it is isomorphic";
    }
    else{
        cout<<"No,not isomorphic";
    }
    return 0;
}
