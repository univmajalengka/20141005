#include<iostream>
using namespace std;

//funcion jam ke td
int jam(int j, int m, int d){
	int td;
	td=(j*3600)+(m*60)+d;
	return td;
}
//prosedur td ke jam
void total_detik(int a){
	int j,m,d,sj;
	j=a/3600;
    sj=a%3600;
    m=sj/60;
    d=sj%60;
    cout<<"hasil konversi total detik ke jam = "<<j<<" jam"<<" : "<<m<<" menit"<<" : "<<d<<" detik"<<endl;
}
void batas2(){
	cout<<"=============================================================================="<<endl;
}
void batas1(){
	cout<<"---------------------------------------------------"<<endl;
}
int main(){
	int j1,m2,d3,td;
	batas2();
		cout<<"masukan jam \t= ";
		cin>>j1;
		cout<<"masukan menit \t= ";
		cin>>m2;
		cout<<"masukan detik \t= ";
		cin>>d3;
	batas1();
		cout<<"total detik \t= "<<jam(j1,m2,d3)<<endl;
	batas2();
		cout<<"masukkan total detik \t= ";
		cin>>td;
	batas1();
		total_detik(td);	
}
