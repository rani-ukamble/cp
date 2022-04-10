#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i;
	string srev;
	cin>>s;
	for(i=s.size()-1;i>=0;i--)
	srev.push_back(s[i]);
	if(s==srev)
	cout<<"YES\n";
	else
	cout<<"NO\n";
	
	return 0;
}
