#include<iostream>
#include<math.h>
using namespace std;
bool is(int a){
	if(ceil((double)sqrt(a))==floor((double)sqrt(a)))
	return true;
	else
	return false;
}
int main(){
	int t;
	cin>>t;
	for(int l=0;l<t;l++){
		 int a;
		 cin>>a;
		 while(!is(a)){
			 a++;
		 }
		 cout<<a<<endl;

	}
	return 0;
}
