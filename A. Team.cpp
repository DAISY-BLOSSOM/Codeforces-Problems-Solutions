//https://codeforces.com/contest/231/problem/A

#include <iostream>
 
using namespace std;
 
int main() {
   int n,q=0;
   cin>>n;
   int a[n][3];
   for(int i=0;i<n;i++){
       int ct=0;
       for(int j =0;j<3;j++){
           cin>>a[i][j];
           if(a[i][j] ==1) ct++;
       }
       if(ct>=2) q++;
   }
   cout<<q;
}
