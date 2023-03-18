#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	string res="";
	int a,v;
	for(int i=0; i<100; i++){
		cin>>s;
		a=0;
		int r=res.size();
		int n=s.size();
		int b=abs(n-r);
		
		if(r<n){
			for(int k=0; k<b; k++)
				res="0"+res;
		}
		else{
			for(int k=0; k<b; k++)
				s="0"+s;
		}
		
		r=res.size();
		for(int j=r-1; j>=0; j--){
			v=(res[j]-'0'+s[j]-'0'+a)/10;
			res[j]=((res[j]-'0'+s[j]-'0'+a)%10)+'0';
			a=v;                             
		}
		if(a>0) res=to_string(a)+res;
	}
	for(int i=0; i<10; i++){
		cout<<res[i];
	}
}

