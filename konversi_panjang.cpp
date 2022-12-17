// KONVERSI SATUAN PANJANG
#include <iostream>
using namespace std;

int main(){
	// deklarasi variable
	double  yard, kaki, inchi, meter;
	
	//Memasukan nilai yard, kaki dan inchi
	cout << "Memasukan satuan yard: ";
	cin >> yard;
	cout << "Memasukan satuan kaki: ";
	cin >> kaki;
	cout << "Memasukan satuan Inchi: ";
	cin >> inchi;
	
	//Menghitung konversi
	meter = 0.9144 * yard + 0.3048 * kaki + 0.0254 * inchi;
	cout << endl;
	
	// menampilkan hasil konversi
	cout << yard << " Yard, " << kaki << " Kaki, " << inchi << " Inchi setara dengan " << meter << " meter";
}
