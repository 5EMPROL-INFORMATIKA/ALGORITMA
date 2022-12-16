#include <iostream>
using namespace std;
int main() {
    char pilih,ulang;

    do{
         int nilai,seleksi1,seleksi2;
 
 seleksi1 = 70;
 seleksi2  = 75;
 
 cout << "masukan nilai: ";
 cin >> nilai;
 
 if(nilai > seleksi1){
     cout << "anda lulus di sekelksi 1\n";
     if(nilai > seleksi2){
         cout << "anda lulus di seleksi 2\n";
     }else{
        cout << "anda tidak lulus diseleksi 2"; 
     }
 }else{
     cout << "anda tidk lulus diseleksi 1";
     exit;
 }
 cout << endl;
    cout << endl;
    cout << "Ingin pilih menu lain ? (y/t) "; cin >> ulang;
    }
    while(ulang != 't');
    cout << "TERIMAKASIH!!";
}
