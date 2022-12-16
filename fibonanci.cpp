#include <iostream>
using namespace std;
int main()
{
    cout << "Membuat Deret bilangan fibonanci" << endl;
    int bil1,bil2,bil_con,mulai,suku,i;

    bil1 = 0;
    bil2 = 1; 

    cout << "Masukan jumlah suku: ";
    cin >> suku;

    cout << "ingin mulai perhitungan dari angka berapa?: ";
    cin >> mulai;

    cout << bil1 << "," << bil2 << " ";

    // selanjutnya buat perulangan mulai dari 3 karena bil1 dan bil2 sudah dicetak.
    for(i = mulai; i <= suku; i++){
     bil_con = bil1 + bil2;
     bil1 = bil2;
     bil2 = bil_con;
     cout << bil_con << " ";
    }
}
