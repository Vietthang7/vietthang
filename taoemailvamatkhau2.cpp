#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	map<string,int> mp;
	while(t--){
		string s;
		string tmp;
		getline(cin,s);
		for(char &x:s){
			x=tolower(x);
		}
		stringstream ss(s);
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		string email=v[v.size()-2];
		for(int i=0;i<v.size()-2;i++){
			email+=v[i][0];
		}
		mp[email]++;
		if(mp[email]==1){
		cout<<email<<"@xyx.edu.vn"<<endl;
	}
	else {
		cout<<email<<mp[email]<<"@xyx.edu.vn"<<endl;
	}
		stringstream ss2(v[v.size()-1]);
		while(getline(ss2,tmp,'/')){
			cout<<stoi(tmp);
		}
		cout<<endl;
	}
}