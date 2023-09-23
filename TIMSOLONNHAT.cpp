#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	long long siu=0;
	long long sum=0;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			sum=sum*10+s[i]-'0';
		}
		if(isdigit(s[i])==false || i==s.size()-1){
			siu=max(siu,sum);
			sum=0;
		}
	}
	cout<<siu;
}