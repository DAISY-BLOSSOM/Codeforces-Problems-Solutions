// https://codeforces.com/contest/1005/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     
     int n,c=0; cin>>n;
     int a[n];
     vector<int> q;
     for(int i=0;i<n;i++){
         cin>>a[i];
         if(i!=0){
              if(a[i]==1){
             c++;
             q.push_back(a[i-1]);
         }
         }
         else if(i==0){
             if(a[i]==1)
             c++;
         }
        
     }
     cout<<c<<"\n";
      for(int i=0;i<c-1;i++){
         cout<<q[i]<<" ";
     }
     cout<<a[n-1];
}
 
