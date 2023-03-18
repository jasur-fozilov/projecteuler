#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	string res="";
	int a;
	for(int i=0; i<5; i++){
		cin>>s;
		a=0;
		int r=res.size();
		int n=s.size();
		int b=abs(n-r);
		if(r<n){
			for(int j=0; j<b; j++){
				res="0"+res;
			}
		}
		else{
			for(int j=0; j<b; j++){
				s="0"+s;
			}
		}		
		cout<<r<<endl;
		cout<<s<<endl;
		for(int j=r-1; j>=0; j--){
			res[j]=char(((int(res[j]-'0')+int(s[j]-'0')+a)%10)+'0');
			cout<<res[j];
			a=(int(res[j]-'0')+int(s[j]-'0')+a)/10;
		}
		if(a>0) res=to_string(a)+res;
		
	}
	for(int i=0; i<10; i++){
		cout<<res[i];
	}
}

