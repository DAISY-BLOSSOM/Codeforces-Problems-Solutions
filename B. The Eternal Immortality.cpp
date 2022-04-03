//

#include<bits/stdc++.h>
typedef long long int ll;
 
using namespace std;
 
int main() {
   ll a,b;
   cin>>a>>b;
   if(b-a>=10) {cout<<"0"<<endl; return 0;}
   ll lstDigit=1;
   for(ll i=a+1;i<=b;i++){
       
       lstDigit*=i%10;
   }
  lstDigit%=10;
   cout<<lstDigit;
   
   
}
