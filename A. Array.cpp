// https://codeforces.com/contest/300/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
   vector<int> pos,neg,zero;
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i] <0){
           neg.push_back(a[i]);
       }
       else if(a[i]>0){
           pos.push_back(a[i]);
       }
       else{
           zero.push_back(a[i]);
       }
   }
   
   if(neg.size()%2==0){
      int t=neg.back();
      neg.pop_back();
       zero.push_back(t);
   }
   
   if(pos.empty()){
       int a=neg.back();
       neg.pop_back() ;
       int b =neg.back();
       neg.pop_back() ;
       pos.push_back(a);
       pos.push_back(b);

   }
   //print
   cout<<neg.size()<<" ";
   for(int i=0;i<neg.size();i++){
       cout<<neg[i]<<" ";
   }
   cout<<"\n";
   cout<<pos.size()<<" ";
   for(int i=0;i<pos.size();i++){
       cout<<pos[i]<<" ";
   }
   cout<<"\n";
   cout<<zero.size()<<" ";
   for(int i=0;i<zero.size();i++){
       cout<<zero[i]<<" ";
   }
}

