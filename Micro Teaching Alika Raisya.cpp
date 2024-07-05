#include <iostream>
#include <string>
using namespace std;


int n;

int perkalianLima(int n){
	
	return n*5;
	
}

int perkalianTiga(int n){
	
	return n*3;
	
}

int tampilan(){
	
	cout << "\nMasukkan Nilai N: ";
	cin >> n;
	
	
	return n;
}

void menu (){
	char pilih;
	
	for (int i = 0; i < 30; i++){
		cout << "=";
	}
	
	cout << "\nPilih Program \n1. Program Perkalian Tiga \n2. Program Perkalian Lima \nPilih : ";
	cin >> pilih; 
	
	
	switch (pilih){
		case '1' :
			tampilan ();
			cout << "Hasil Perkalian " << n << " x " << 3 << " = " << perkalianTiga(n);
			break;
		case '2' :
			tampilan ();
			cout << "Hasil Perkalian " << n << " x " << 5 << " = " <<perkalianLima(n);	
			break;
		default	:
			cout << "Pilihan Invalid";
	}
	
}

int main (){
	
	string kondisi;
	int w = 1;
	
	while (w ==1 ){
		
		menu();
		cout << "\nKeluar dari Program? [Yes/No] : ";
		cin >> kondisi; 
		
		if (kondisi == "Yes" || kondisi == "yes"){
			cout << "\nKeluar dari Program\n";
			for (int i = 0; i < 30; i++){
				cout << "=";
			} break;
		} else if (kondisi == "No" || kondisi == "no"){
			cout << "\nMelanjutkan Program\n\n";
		} else {
			cout << "\nJawaban invalid, mengulang program\n" << endl;
		}
	}
}