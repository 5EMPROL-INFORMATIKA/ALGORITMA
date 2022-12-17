#include <iostream>
using namespace std;

int main(){
	// deklarasi variable
	int detik, menit, jam, sisajam;

	// input satuan waktu detik
	cout << "Masukan waktu dalam detik : "; 
	cin >> detik;
	cout << endl;
	
	//proses konversi dari detik ke jam, menit dan detik
	jam = detik/3600;
	
	// menghasilkan bilangan bulat sisa
	sisajam = detik%3600; //sisa bagi atau modulo
	
	// menit adalah sisa dari perhitungan di atas
	menit = sisajam/60;
	
	// Detik adalah sisa dari perhitungan di atas
	detik = sisajam%60;
	
	// Menampilkan hasil operasi
	cout << "Waktu tersebut setara dengan " << jam << " Jam. " << menit << " Menit, " << detik << " Detik";
}
