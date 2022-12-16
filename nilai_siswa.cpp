#include <iostream>
 
using namespace std;
 
int main()
{
  int input[100], arr_count, i;
  float total, rata2;
 
  cout << "Berapa mata pelajaran: ";
  cin >> arr_count;
 
  cout << "Ada "<< arr_count << " mata pelajaran yang anda input UTS dan UAS" ;
  cout << endl;
 
  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < arr_count; i++){
    cout << "Masukan Nilai: "; 
    cin >> input[i];
  }
 
  cout << endl;
 
  // cari total semua element array
  total = 0;
  for(i = 0; i < arr_count; i++){
    total = total+input[i];
  }
 
  // hitung nilai rata-rata
  rata2 = (total/arr_count);
  cout << "Nilai rata-rata dari "<< arr_count <<
          " Mata Pelajaran adalah: " << endl << rata2;
 
  cout << endl;
  return 0;
}
