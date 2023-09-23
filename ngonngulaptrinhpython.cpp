#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	string t="python";
	int indx=0;
	for(char x:s){
		if(x==t[indx]){
			++indx;
		}
		if(indx==6){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}