#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	for(int l =0;l<t;l++){
		string s;
		cin>>s;
		int p=0;
		vector<char> a;
		string h;
		for(int i=0;i<s.size();i++){
			h.push_back(s[i]);
		}
		transform(h.begin(),h.end(),h.begin(), ::tolower);
		if(s.length()%2!=0){
		for(int i=0;i<s.length();i++){
				
				if(i!=s.length()/2){
				if(h[i]==h[s.length()-i-1])
				p++;
				else
				a.push_back(s[s.length()-i-1]);}
				else
				a.push_back(s[s.length()-i-1]);
				
		}}
		else{
			for(int i=0;i<s.length();i++){
				
				
				if(h[i]==h[s.length()-i-1])
				p++;
				else
				a.push_back(s[s.length()-i-1]);
		}}
		cout<<p<<endl;
		for(int i=0;i<a.size();i++)
		cout<<a[i];
		cout<<endl;
	}
	return 0;
}
