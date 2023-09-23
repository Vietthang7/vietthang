#include <bits/stdc++.h>

using namespace std;
struct SinhVien{
	string ten, ngaysinh, diachi;
	int toan,ly,hoa,tongdiem;
	void nhap(){
		getline(cin,ten);
		cin>>ngaysinh;
		cin.ignore();
		getline(cin,diachi);
	    cin>>toan>>ly>>hoa;
	    tongdiem=toan+ly+hoa;
	}
	void in(){
		cout<<ten<<" "<<ngaysinh<<" "<<diachi<<" "<<tongdiem<<" ";
	}
};
int main(){
	int n;
	cin>>n;
	vector<SinhVien> a(n);
	int _max=0;
	for(int i=0;i<n;i++){
		cin.ignore();
		a[i].nhap();
		_max=max(a[i].tongdiem,_max);
	}
	cout<<"DANH SACH THU KHOA :"<<endl;
	for(int i=0;i<n;i++){
		if(a[i].tongdiem==_max){
			a[i].in();
			cout<<endl;
		}
	}
	cout<<"KET QUA XET TUYEN :"<<endl;
	for(int i=0;i<n;i++){
		if(a[i].tongdiem>=24){
			a[i].in();
			cout<<"DO";
		}
		else {
			a[i].in();
			cout<<"TRUOT";
		}
		cout<<endl;
	}
	
}