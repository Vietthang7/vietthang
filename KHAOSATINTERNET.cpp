#include <bits/stdc++.h>

using namespace std;
struct wed{
	string data;
	int fre;
};
bool cmp(wed a,wed b){
	if(a.fre!=b.fre){
		return a.fre>b.fre;
	}
	else {
		 return a.data<b.data;
	}
}

int main(){
	vector<wed> v;
	string x;
	int cnt=0;
	while(cin>>x){
		++cnt;
		if(cnt%3!=0){
			continue;
		}
		int ok=0;
		for(int i=0;i<v.size();i++){
			if(v[i].data==x){
				v[i].fre++;
				ok=1;
				break;
			}
		}
		if(ok==0){
			v.push_back({x,1});
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(wed x:v){
		cout<<x.data<<" "<<x.fre<<endl;
	}
}