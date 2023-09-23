#include <bits/stdc++.h>

using namespace std;
bool cmp(string a , string b){
	string aa=a+b;
	string bb=b+a;
	return bb<aa;
}
int main(){
	string s;
	cin>>s;
	s+="a";
	vector<string> v;
	string number="";
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			number+=s[i];
		}
		else {
			while(number.size()>1 && number[0]==0){
				number.erase(0,1);
			}
			if(number!=""){
				v.push_back(number);
				number="";
			}
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(string x:v){
		cout<<x;
	}
	
}