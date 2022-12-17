#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
	string nama[5]={"Arya", "Ferdy", "Rosyid", "Fauzi", "Fahrul"}, nama_mahasiswa;
	char pilih;
	string prodi[2]={"TI", "SI"}, prodi_dipilih;
	string nim[5] = {"20220801084","20220801085","20220801086","20220801087","20220801088"}, nim_mahasiswa;
	int masukan,tm=0,matkul[3],i, cek_nama, cek_prodi, cek_matkul, cek_nim, total_matkul, tarif[100],total_tarif,tf=0;
	char pilih_ulang;
	
do{
		HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
		cout << "========================================" << endl;
		cout << "LIST PROGRAM KULIAH TAHUN 2022/2023" << endl;
		cout << "========================================" << endl;
		cout << "\tMata Kuliah\t" << endl;
		cout << "========================================" << endl;
		cout << "1.Algoritma || SKS 3" << endl;
		cout << "2.Aljabar || SKS 3" << endl;
		cout << "3.DSI || SKS 2" << endl;
		cout << "========================================" << endl;
		cout << "\tProgram Studi\t" << endl;
		cout << "========================================" << endl;
		cout << "1.TI" << endl;
		cout << "2.SI" << endl;
		cout << "========================================" << endl;

		cout << "Nama:\t";
		cin >> nama_mahasiswa;
		for(cek_nama=0; cek_nama < 5; cek_nama++){
			if(nama_mahasiswa == nama[cek_nama]){
				cout << "NIM:\t";
				cin >> nim_mahasiswa;
					for(cek_nim=0; cek_nim < 5; cek_nim++){
						if(nim_mahasiswa == nim[cek_nim]){
							cout << "Prodi:\t";
							cin >> prodi_dipilih;
								for(cek_prodi=0; cek_prodi < 2; cek_prodi++){
									if(prodi_dipilih == prodi[cek_prodi]){
										cout << "========================================" << endl;
										cout << "\tAnda Berhasil Login ke siakad\t\n";
										cout << "========================================" << endl;
										cout << "Berapa jumlah matkul yang ingin anda ulang ?\t"; cin >> masukan;
										for(cek_matkul=0;cek_matkul<masukan;cek_matkul++){
											cout << "pilih kategori matkul:\t"; cin >> pilih_ulang;
												if(pilih_ulang == '1'){
													cout << "Masukan Jumlah SKS: \t"; cin >> matkul[3];
													if(matkul[3] == 3){
														SetConsoleTextAttribute(h,10);
														cout << "\n[Success]";
														SetConsoleTextAttribute ( h, 15);
														cout << " Berhasil dimasukan ke database\n\n";
														tarif[100] = 100000;
													}else{
														SetConsoleTextAttribute(h,12);
														cout << "\n[Oops!]";
														SetConsoleTextAttribute ( h, 15);
														cout << " Gagal dimasukan karna SKS tidak sesuai\n\n";
														break;
													}
												}else if(pilih_ulang == '2'){
													cout << "Masukan Jumlah SKS: \t"; cin >> matkul[3];
													if(matkul[3] == 3){
														SetConsoleTextAttribute(h,10);
														cout << "\n[Success]";
														SetConsoleTextAttribute ( h, 15);
														cout << " Berhasil dimasukan ke database\n\n";
														tarif[100] = 100000;
													}else{
														SetConsoleTextAttribute(h,12);
														cout << "\n[Oops!]";
														SetConsoleTextAttribute ( h, 15);
														cout << " Gagal dimasukan karna SKS tidak sesuai\n\n";
														break;
													}
												}else if(pilih_ulang == '3'){
													cout << "Masukan Jumlah SKS: \t"; cin >> matkul[3];
													if(matkul[3] == 2){
														SetConsoleTextAttribute(h,10);
														cout << "\n[Success]";
														SetConsoleTextAttribute ( h, 15);
														cout << " Berhasil dimasukan ke database\n\n";
														tarif[100] = 50000;
													}else{
														SetConsoleTextAttribute(h,12);
														cout << "\n[Oops!]";
														SetConsoleTextAttribute ( h, 15);
														cout << " Gagal dimasukan karna SKS tidak sesuai\n\n";
														break;
													}
												}else{
													SetConsoleTextAttribute(h,12);
													cout << "\n[Oops!]";
													SetConsoleTextAttribute ( h, 15);
													cout << "\tTidak ada dalam kategori matkul";
													break;
												}
										total_matkul = tm+=matkul[3];
										total_tarif = tf+=tarif[100];
										}
									}
								}
						}
					}
			}
		}
		cout << "Total SKS:\t" << total_matkul;
		cout << "\nTotal Tarif:\t" << total_tarif;

		cout << endl;
		cout << "\nIngin Logout? (y/t): ";
		cin >> pilih;
		system("cls");
}
while(pilih != 'y');
cout << "Terimakasih!";
}
