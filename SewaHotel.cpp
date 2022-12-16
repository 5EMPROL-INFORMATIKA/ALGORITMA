// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int harga[2][4],jam,total;
    string pilih;
    
    
    harga[0][0] = 10000;
    harga[0][1] = 20000;
    harga[0][2] = 30000;
    harga[0][3] = 40000;
    harga[1][0] = 50000;
    harga[1][1] = 60000;
    harga[1][2] = 70000;
    harga[1][3] = 80000;
    
    cout<<"  Hari\t\tA\tB\tC\tD\n"<<"1. Weekday\t"<<harga[0][0]<<"\t"<<harga[0][1]<<"\t"<<harga[0][2]<<"\t"<<harga[0][3]<<"\t\n"<<"2. Weekend\t"<<harga[1][0]<<"\t"<<harga[1][1]<<"\t"<<harga[1][2]<<"\t"<<harga[1][3]<<"\t\n";
    
    cout<<"Pilih Hari yang Apa?\nContoh : 1A\n";
    cin>>pilih;
    if (pilih == "1A"){
        cout<<"Harga Kamar : " << harga[0][0] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[0][0]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "1B"){
        cout<<"Harga Kamar : " << harga[0][1] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[0][1]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "1C"){
        cout<<"Harga Kamar : " << harga[0][2] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[0][2]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "1D"){
        cout<<"Harga Kamar : " << harga[0][3] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[0][3]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "2A"){
        cout<<"Harga Kamar : " << harga[1][0] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[1][0]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "2B"){
        cout<<"Harga Kamar : " << harga[1][1] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[1][1]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "2C"){
        cout<<"Harga Kamar : " << harga[1][2] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[1][2]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else if(pilih == "2D"){
        cout<<"Harga Kamar : " << harga[1][3] << "\nBerapa Jam anda Sewa?\n";cin>>jam;
        
        total = harga[1][3]*jam;
        cout<<"Total Harga yang harus anda bayar adalah : "<<total;
    }else
        cout<<"Anda Memasukkan Kode yang Salah!!!";
}
