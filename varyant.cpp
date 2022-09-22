#include<iostream>
using namespace std;
main(){
	int n;
	float a,top,cizX,ozel;
	cin>>n;
	float b[n];
	for(int i=1 ; i<=n ; i++){
		cin>>a;
		b[i]=a;
		top=top+a;
	}
	cizX=top/n;
	for(int u=1 ; u<=n ; u++){
		//cout<<b[u];
		ozel= ozel+(b[u]-cizX)*(b[u]-cizX);
		cout<<endl<<ozel<<endl;
	}
	float sayi;
	sayi=ozel/(n-1);
	//cout<<ozel;
	cout<<sayi;
}
