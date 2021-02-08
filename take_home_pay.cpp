#include<iostream>
using namespace std;

	void batas(){
		cout<<"============================"<<endl;
	}

int main(){
	
	const double persentunjangan = 0.2;
	const double persenpajak = 0.15;
	string str;
	int gajibersih,gajipokok,pajak,tunjangan;
	
	batas();
	cout<<"Masukkan nama \t: ";
	getline(cin, str);
	cout<<"Masukkan Gaji pokok : ";
	cin>>gajipokok;
	
	batas();
	
	tunjangan = gajipokok * persentunjangan;
	pajak = gajipokok * persenpajak;
	gajibersih = gajipokok + tunjangan - pajak;
	
	cout<<"Nama \t: "<<str<<endl;
	cout<<"Gaji bersih : "<<gajibersih<<endl;
	
	batas();
	return 0;
}
