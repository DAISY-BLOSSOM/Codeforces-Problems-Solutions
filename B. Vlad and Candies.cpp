// https://codeforces.com/contest/1660/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int len=s.size();
		map<char,int>m;
		for(int i=0;i<s.size();i++)
		{
			m[s[i]]++;
			if(m[s[i]]==2)
			{
				len-=2;
				m.clear();
			}
		 } 
		 cout<<len<<"\n";
	}
	return 0;
}
