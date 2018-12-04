#include <iostream>
using namespace std;

int jumlah(int, int);
int kurang(int, int);
int kali(int, int);
int bagi(int, int);

int main()
{
           
            int num1, num2;
            int pilih;
            cout << "_________________\n";
            cout << " MENU KALKULATOR\n";
            cout << "=================\n";
            cout << "1 = PENJUMLAHAN \n";
            cout << "2 = PENGURANGAN \n";
            cout << "3 = PERKALIAN   \n";
            cout << "4 = PEMBAGIAN   \n";
            cout << "5 = KELUAR      \n";
            cout << " Pilihan : ";
            cin >> pilih;
            cout << endl;
            switch (pilih)
            {
            case 1:
                        cout << "Anda memilih Menu 1 = PENJUMLAHAN " << endl;
                        cout << "Masukkan bilangan pertama : ";
                        cin >> num1 ;
                        cout << "Masukkan bilangan kedua : ";
                        cin >> num2 ;
                        cout << "Hasil Penjumlahannya = "
                                    << jumlah(num1, num2) << endl;
                        break;
            case 2:
                        cout << "Anda memilih Menu 2 = PENGURANGAN " << endl;
                        cout << "Masukkan bilangan pertama : ";
                        cin >> num1 ;
                        cout << "Masukkan bilangan kedua : ";
                        cin >> num2 ;
                        cout << "Hasil Pengurangan = "
                                    << kurang(num1, num2) << endl;
                        break;
            case 3:
                        cout << "Anda memilih Menu 3 = PERKALIAN " << endl;
                       cout << "Masukkan bilangan pertama : ";
                        cin >> num1 ;
                        cout << "Masukkan bilangan kedua : ";
                        cin >> num2 ;
                        cout << "Hasil Perkalian = "
                                    << kali(num1, num2) << endl;
                        break;
            case 4:
                        cout << "Anda memilih Menu 4 = PEMBAGIAN " << endl;
                        cout << "Masukkan bilangan pertama : ";
                        cin >> num1 ;
                        cout << "Masukkan bilangan kedua : ";
                        cin >> num2 ;
                        cout << "Hasil Pembagian = "
                                    << bagi(num1, num2) << endl;
                        break;
            default:
                        cout << "Anda tidak memilih dengan benar" << endl;

            }
}
int jumlah(int a, int b)
{
            int jumlah;
            jumlah = a + b;
            return jumlah;              //nilai fungsi yang akan dikembalikan.
}
int kurang(int a, int b)
{
            int kurang;
            kurang = a - b;
            return kurang;              //nilai fungsi yang akan dikembalikan.
}
int kali(int a, int b)
{
            int kali;
            kali = a * b;
            return kali;                   //nilai fungsi yang akan dikembalikan.
}
int bagi(int a, int b)
{
            int bagi;
            bagi = a / b;
            return bagi;                  //nilai fungsi yang akan dikembalikan.
}