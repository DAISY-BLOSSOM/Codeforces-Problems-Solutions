// https://codeforces.com/contest/1660/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t,s,n;
   cin>>t;
   while(t--){
       cin>>n;
       long long a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
           }
           if(n>1){
                sort(a,a+n);
                long long sub = a[n-1]-a[n-2];
                if( sub>1)  cout<<"NO"<<endl;
                else           cout<<"YES"<<endl;
 
           }
          else if(n==1){
                if(a[n-1]>1)  cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
          }
   }
}
