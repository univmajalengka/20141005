#include<iostream>
using namespace std;
 
 int main(){
 	int j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3,sm3,sd3,sj3;
 	
 //input waktu awal ex: 9:25:30
	j1=9;
	m1=25;
	d1=30;
 //input waktu akhir ex: 10:26:31
 	j2=10;
	m2=26;
	d2=31;
 //proses konversi waktu ke td
 	td1=(j1*3600)+(m1*60)+d1;
 	td2=(j2*3600)+(m2*60)+d2;
 //operasi pengurangan
 	td3=td2-td1;
 //konversi td ke j3,m3,d3
 	j3=td3/3600;
 	sj3=td3%3600;
 	m3=sj3/60;
 	d3=sj3%60;
 //output j3,m3,d3
 	cout<<j3<<":"<<m3<<":"<<d3<<":";
 }
