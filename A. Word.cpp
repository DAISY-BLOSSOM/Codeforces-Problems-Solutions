//https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s; int u=0,l=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
         if ( s[i] >= 65 && s[i] <= 90)  {u++;}
       else if ( s[i] >= 97 && s[i] <= 122)  {  l++;}
     }
     
     
    if(u>l){
        for(int i=0;i<s.size();i++){
            if ( s[i] >= 97 && s[i] <= 122) {
                   s[i] =s[i]- 32;
            }
         }
    }else if(l>=u){
         for(int i=0;i<s.size();i++){
             if ( s[i] >= 65 && s[i] <= 90) {
                   s[i] =s[i]+ 32;
            }
         }
    }
    cout<<s;
   
}
