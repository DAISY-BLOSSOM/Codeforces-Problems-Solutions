//https://codeforces.com/contest/791/problem/A

#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,year;
    cin>>a>>b;
    for(int i=1; ;i++){
        a*=3;
        b*=2;
        if(a>b){
            year=i;
            break;
        }
    }
    cout<<year;
}
