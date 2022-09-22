#include<iostream>
using namespace std;

main(){
	int a,b,n,sonuc,f;
	cout<<"a :";
	cin>>a;
	cout<<"b :";
	cin>>b;
	cout<<"N :";
	cin>>n;
	
	for(a;a<b;a++){
		//cout<<"loop "<<a<<endl;
		f=a+1;
		for(f;f<=b;f++){
			cout<<"{"<<a<<","<<f<<"}"<<"="<<f+a<<endl;
			if((a+f)==n){
			sonuc++;
			}
		}
	}
	cout<<sonuc;
	cin>>a;
}

