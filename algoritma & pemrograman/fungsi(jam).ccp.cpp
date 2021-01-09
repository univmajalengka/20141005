#include<iostream>
using namespace std;
 
int jam(int j, int m, int d){
 	int td;
 	td=(j*3600)+(m*60)+d;
 	return td;
 }
void selisih(int td){
	int j,sj,m,d;
	j=td/3600;
 	sj=td%3600;
 	m=sj/60;
 	d=sj%60;
 	cout<<"Anda Bermain selama : "<<j<<":"<<m<<":"<<d<<endl;; 	
}
void batas(){
	cout<<"================================="<<endl;
}
 int main(){
 	int j1,j2,m1,m2,d1,d2,total_detik;
//looping input waktu awal dan akhir
batas();
for(int i=1; i<=2; i++){
	if(i==1){cout<<"Masukan Waktu Awal main di bawah " << endl;
	}else{
		cout<<"Masukan Waktu akhir main di bawah " << endl;
	}
	cout<<"Masukan Jam     :";
	cin>>j1;
	cout<<"Masukan Menit   :";
	cin>>m1;
	cout<<"Masukan Detik   :";
	cin>>d1;
	total_detik = jam(j1,m1,d1) - total_detik;
	batas();
}
 	 selisih(total_detik);
 	 batas();
 	 
 	 
 	
 }
