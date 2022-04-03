//https://codeforces.com/contest/450/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    
     int n,a,index=0,mx=0;
     cin>>n>>a;
     double arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
 
        double s = arr[i]/(a);
        // int temp = s;
        // if(s>=double(temp+0.1))s++;
        int pos=ceil(s);
        // cout<<pos<<" ";
         if(pos>=mx){
             index=i+1;
             mx=pos;
         }
     }
    //  cout<<endl;
        cout<<index;
}
