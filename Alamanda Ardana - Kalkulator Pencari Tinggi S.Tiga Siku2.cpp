//Kalkulator Pencari Tinggi Segitiga Siku-Siku Buatan Alamanda Ardana
#include <iostream>

using namespace std;

//Melakukan Inisialisasi Variabel
int luas, alas, tinggi;

//function main
int main () {
	cout<<"MENGHITUNG TINGGI SUATU SEGITIGA SIKU-SIKU"<<endl;
	cout<<"--Disini Gabakal Ada Gambar Segitiganya, Jadi Mohon Bayangin Aja Ya Segitiganya, Hehe--"<<endl;
	cout<<"--Satuan Luas adalah cm^2, sedangkan Satuan Alas dan Tinggi adalah cm--"<<endl;
	cout<<"--Di Kalkulator Ini, Kamu Masukkan Angkanya Aja Ya--"<<endl;
	
	//Tambahkan Titik-Titik supaya Lebih Enak Dilihat
	cout<<"----------------------------------------"<<endl;
	
	//Masukkan Input Besaran Luas
	cout<<"Luas = ";
	cin>>luas;
	
	//Masukkan Input Besaran Alas
	cout<<"Alas = ";
	cin>>alas;
	
	//Masukkan Rumus Pencarian Tinggi pada Segitiga Siku-Siku
	tinggi = 2 * luas / alas;
	
	//Masukkan Hasil Pencarian Tinggi Segitiga Siku-Siku
	cout<<"TINGGI = "<<tinggi<<endl;
	
	//Tambahkan Titik-Titik supaya Lebih Enak Dilihat
	cout<<"----------------------------------------" <<endl;
	
	//Masukkan Kalimat Penutup
	cout<<"Terima kasih telah mencoba."<<endl;

	
	return 0;
}
