//https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
   int t,counter=0;
   cin>>t;
 
   int a[t];
   for(int i=0;i<t;i++){
       cin>>a[i];
   }
   
   for(int i=0;i<t;i++){
       if(a[i+1]==(a[i])){
           continue;
       }
       else{
           counter++;
       }
   }
   cout<<counter;
}
