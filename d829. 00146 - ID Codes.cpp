#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(cin>>s&&s!="#")
	{
		vector<string> w;
		if(next_permutation(s.begin(),s.end()))
			cout<<s<<endl;
		else
			cout<<"No Successor"<<endl;
		
	}
}
