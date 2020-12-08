#include<iostream>
using namespace std;

int main(){
	int j,m,d,td;
	
	cout<<"masukkan jam :";
	cin>>j;
	cout<<"masukkan menit :";
	cin>>m;
	cout<<"masukkan detik :";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"total detik :"<<td<<endl;
	
	return 0;
	
}
