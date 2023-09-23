#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin>>s;
	map<char,int> mp;
	for(char x:s){
		mp[x]++;
	}
	int _max=0;
	int _min=1e7;
	for(auto it:mp){
		_max=max(it.second,_max);
		_min=min(it.second,_min);
	}
	string num_max;
	string num_min;
	for(auto it=mp.rbegin();it!=mp.rend();it--){
		if((*it).second==_max){
			num_max=(*it).first;
			break;
		}
		
	}
	for(auto it=mp.rbegin();it!=mp.rend();it--){
		if((*it).second==_min){
			num_min=(*it).first;
			break;
		}
	}
	cout<<num_max<<" "<<_max<<endl;
	cout<<num_min<<" "<<_min<<endl;
}