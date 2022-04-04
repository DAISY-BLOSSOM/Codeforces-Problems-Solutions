//https://codeforces.com/contest/236/problem/A


#include <bits/stdc++.h>
#define ll long long int
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
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
//-----------------------------------------------------------
//*another solution using set 

#include <bits/stdc++.h>
#define ll long long int
#define fast_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    string s; cin>>s;
    set<char> st;
    for(int i=0;i<s.length();i++){
        st.insert(s[i]);
    }
    if(st.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

    return 0;
}
