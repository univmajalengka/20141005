#include<iostream>
using namespace std;

int main(){
	
	int td,m,j,sm,d;
	cout<<"masukan total detik:";
	cin>>td;
	
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	
	cout<<j<<":"<<m<<":"<<d;
	
return 0;
}
