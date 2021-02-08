#include <iostream>
using namespace std;

void batas(){
	cout<<"==================="<<endl;	
}

int main()
{
	int harga,harga1,diskon;
	cout<<"program DISKON"<<endl;
	cout<<"Masukan total harga : ";
	cin>>harga;
	batas();
	if (harga<=25000){
		harga1=harga;
	}
		else if (harga<=50000){
				harga1=harga-(harga*0.1);
				cout<<"Diskon  : 10%"<<endl;
			}else if(harga<=100000){
					harga1=harga-(harga*0.125);
					cout<<"Diskon  : 12,5%"<<endl;
				}else if(harga>100000){
						harga1=harga-(harga*0.15);
						cout<<"Diskon  : 15%"<<endl;
					}				
	cout<<"total harga : "<<harga1;
	return 0;
}
