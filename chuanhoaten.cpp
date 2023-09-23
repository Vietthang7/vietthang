#include <bits/stdc++.h>

using namespace std;
string CH(string s){
	string tmp;
	string res="";
	stringstream ss(s);
	while(ss>>tmp){
		res+=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			res+=tolower(tmp[i]);
		}
		res+=" ";
	}
	res.pop_back();
	return res;
}
int main(){
	string s;
	getline(cin,s);
	cout<<CH(s)<<endl;
	string ns;
	getline(cin,ns);
	if(ns[1]=='/'){
		ns="0"+ns;
	}
	if(ns[4]=='/'){
		ns.insert(3,"0");
	}
	cout<<ns<<endl;
}