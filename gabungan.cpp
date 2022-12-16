// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char pilih,ulang;

    do
    {
    cout << "\n\n1. Luas Segitiga" << endl;
    cout << "2. Bilangan Fibbonaci" << endl;
    cout << "3. Deret Kuadrat" << endl;
    cout << "4. Angka Tertinggi" << endl;
    cout << "5. Angka Terendah" << endl;
    cout << "6. Angka Rata-Rata" << endl;
    cout << "Pilih Salah Satu: "; cin >> pilih;

    switch(pilih){
        case '1':
            int luas, a, t;
            cout << "Masukkan Alas Segitiga = "; cin >> a;
            cout << "Masukkan Tinggi Segitiga = "; cin >> t;

            luas = 0.5at;

            cout << "Luas Segitiga adalah "<< luas;
            break;

       case '2':
        int n, f1 = 0, f2 = 1, berikutnya = 0;

        cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
        cin >> n;
        cout<<endl;
        cout << "Deret Fibonacci: ";

        for (int i = 1; i <= n; ++i)
        {

        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1)
        {
            cout << " " << f1<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << f2 << " ";
            continue;
        }
        berikutnya = f1 + f2;
        f1 = f2;
        f2 = berikutnya;
         // Mencetak deret bilangan fibonacci berikutnya.
        cout << berikutnya << " ";
        break;
        }

    }

    cout << endl;
    cout << endl;
    cout << "Ingin pilih menu lain ? (y/t) "; cin >> ulang;
    }
    while(ulang != 't');

        cout << "TERIMAKASIH SOB!!";

    cout << endl;
    return 0;
}
