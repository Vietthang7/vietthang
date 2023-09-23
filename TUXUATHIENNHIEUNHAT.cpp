#include <bits/stdc++.h>

using namespace std;
struct word {
	string data;
	int fre;
};
bool cmp(word a,word b){
	return a.data<b.data;
}
int main(){
	vector<word> v;
	string x;
	while(cin>>x){
		int ok=0;
		for(int i=0;i<v.size();i++){
			if(v[i].data==x){
				v[i].fre+=1;
				ok=1;
				break;
			}
		}
		if(ok==0){
			v.push_back({x,1});
		}
  	}
  	int _max=0;
  	for(word x :v){
  		_max=max(x.fre,_max);
	}
	sort (v.begin(),v.end(),cmp);
	for(word x:v){
		if(x.fre==_max){
			cout<<x.data;
			return 0;

		}
	}
	 
}