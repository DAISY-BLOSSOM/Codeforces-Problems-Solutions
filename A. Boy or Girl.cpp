//


#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int sum=0;
    char characters[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int freq[26]={0};
    for(int i=0;i<s.length();i++){
        for(int j=0;j<26;j++){
        if(s[i]==characters[j])
        freq[j]=1;
    }
        
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            sum++;
        }
    }
    if(sum%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
