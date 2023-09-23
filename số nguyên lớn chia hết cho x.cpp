#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	long long x;
	cin>>x;
	long long sum=0;
	for(int i=0;i<s.size();i++){
		sum=sum*10+s[i]-'0';
		sum%=x;
		
	}
	if(sum%x==0){
		cout<<"YES"
	}
	else {
		cout<<"NO";
	}
}