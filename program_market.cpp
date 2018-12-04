#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
  int total=0,a,b,c;
  string kode;
  cout<<""<<endl;
  cout<<"SELAMAT DATANG DI KASIR ARI SHOP"<<endl;
  cout<<""<<endl;
  cout<<"Masukkan Kode Barang :"<<endl;
  cout<<"A = Permen"<<endl;
  cout<<"B = Aqua"<<endl;
  cout<<"C = Keju"<<endl;
  cout<<"Masukkan Barang =";
  cin>>kode;

  if (kode=="A"){
    cout<<"Nama Barang : Permen Lolipop\n";
    int harga=500;
    cout<<"Harga Bayar :"<<harga<<endl;
    cout<<"Jumlah :" ;cin>>a;
    total=harga*a;
    cout<<"total bayar :"<<total;}


  if (kode=="B"){
    cout<<"Nama Barang : Aqua\n";
    int harga=3500;
    cout<<"Harga Bayar :"<<harga<<endl;
    cout<<"Jumlah :" ;cin>>a;
    total=harga*b;
    cout<<"total bayar :"<<total;}



  if (kode=="C"){
    cout<<"Nama Barang : Coklat\n";
    int harga=15000;
    cout<<"Harga Bayar :"<<harga<<endl;
    cout<<"Jumlah :" ;cin>>a;
    total=harga*c;
    cout<<"total bayar :"<<total;}

_getch();
}

