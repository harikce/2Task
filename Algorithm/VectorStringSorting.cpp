#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<string> v;
	int n;
	string val;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>val;
		v.push_back(val);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
}
