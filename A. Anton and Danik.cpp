//https://codeforces.com/contest/734/problem/A

#include <iostream>
 
using namespace std;
 
int main() {
    int n,a=0,d=0;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
    cin>>s[i];
    if(s[i]=='A') a++;
    else if (s[i]=='D') d++;
    }
    if(a>d) cout<<"Anton";
    else if (d>a) cout<<"Danik";
    else cout<<"Friendship";
}
