// KONVERSI SUHU
#include <iostream>
using namespace std;

int main(){
	// Deklarasi variable
	double tc,tf,tr;
	
	// Memasukan data drajat celcius
	cout << "Masukan derajat celcius : "; 
	cin >> tc;
	
	//konversi suhu dari celcius ke fahrenheit dan reamur
	tf = ((9/5) * tc) + 32;
	tr = 0.8 * tc;
	
	//tampilkan hasil konversi
	cout << endl;
	cout << "Hasil Konvesi" << endl;
	cout << "Derajat Fahrenheit : " << tf << endl;
	cout << "Derajat Reamur	: " << tr << endl;
}
