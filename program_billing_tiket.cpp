 #include <iostream>
 #include <conio.h>
 #include <windows.h>
 #include <stdlib.h>
 using namespace std;
 void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 int main()

 {
  string pesawat[100],nama,awal,tujuan,kode[100];
  long int harga[100],jumlah[100],total[100],total_b,jumlahb[100];
  int data;
  float diskon[100],ppn[100];
 system("color a");
  cout<<"======================================="<<endl;
  cout<<"    Program Penjualan Tiket Pesawat    "<<endl;
  cout<<"            KONOHA AIR PORT            "<<endl;
  cout<<"   Jl.Matahari No.37 Telp.0411872780   "<<endl;
  cout<<"---------------------------------------"<<endl;

  cout<<"---------------------------------------"<<endl;
  cout<<"    Berikut adalah kode MASKAPAI    "<<endl;
  cout<<"    GI = GARUDA INDONESIA "<<endl;
  cout<<"    AA = AIR ASIA  "<<endl;
  cout<<"    LA = LION AIR  "<<endl;
  cout<<"    CTL = CITYLINK "<<endl;

  cout<<"   Jl.Matahari No.37 Telp.0411872780   "<<endl;
  cout<<"======================================="<<endl;
  cout<<"Masukkan Nama Penumpang   :" ;
  cin>>nama;
  cout<<"Bandara Awal   :";
  cin>>awal;
  cout<<"Bandara Tujuan   :";
  cin>>tujuan;
  cout<<"Masukkan Jumlah Data      :" ;
  cin>>data;
  for (int i=1; i<=data; i++)
  {cout<<"Data Ke-"<<i<<endl;
  cout<<"Masukkan Kode Pesawat     :" ;
  cin>>kode[i];
  if (kode[i] =="GI")
   { pesawat[i] ="Garuda Indonesia";
   harga[i] = 250000; }else
  if (kode[i] =="AA")
   { pesawat[i] ="AirAsia";
    harga[i] = 180000; }else
  if (kode[i] =="LA")
   { pesawat[i] ="Lion Air";
    harga[i] = 275000; }else
  if (kode[i] =="CTL")
   { pesawat[i] ="Citylink";
    harga[i] = 165000; }else
  
 if (kode[i] =="gi")
   { pesawat[i] ="Garuda Indonesia";
   harga[i] = 250000; }else
  if (kode[i] =="aa")
   { pesawat[i] ="Air Asia";
    harga[i] = 180000; }else
  if (kode[i] =="la")
   { pesawat[i] ="Lion Air";
    harga[i] = 275000; }else
  if (kode[i] =="ctl")
   { pesawat[i] ="citylink";
    harga[i] = 165000; }
  
  cout<<"Nama Pesawat              :"<<pesawat[i]<<endl;
  cout<<"Harga Pesawat             :"<<harga[i]<<endl;
  cout<<"Masukkan Jumlah Belli     :";
  cin>>jumlah[i];
   total[i] = harga[i]*jumlah[i];
  cout<<"Total                     :"<<total[i]<<endl;
  if (jumlah[i] >10)
  { diskon[i] = 0.1*total[i]; }
   else { diskon[i] = 0; }
 cout<<"Diskon                     :"<<diskon[i]<<endl;
 ppn[i] = 0.1 * total[i];
 cout<<"PPN                        :"<<ppn[i]<<endl;
 jumlahb[i]=total[i]-diskon[i]+ppn[i];  }
 
  system("cls");
 
 cout<<"Nama Penumpang   :"<<nama<<endl;
 cout<<"Bandara Awal     :"<<awal<<endl;


 cout<<"|NO|Kode|Nama Pesawat      |Harga  |Total  |Diskon  |PPN   |Jumlah Bayar|"<<endl;
 total_b=0;
 for ( int  j=1; j<=data; j++)
 {
 gotoxy(0,1+j);
 cout<<"|"<<j<<endl;
 gotoxy(3,1+j);
 cout<<"|"<<kode[j]<<endl;
 gotoxy(8,1+j);
 cout<<"|"<<pesawat[j]; 
 gotoxy(27,1+j);
 cout<<"|"<<harga[j];
 gotoxy(35,1+j);
 cout<<"|"<<total[j];
 gotoxy(43,1+j);
 cout<<"|"<<diskon[j];
 gotoxy(52,1+j);
 cout<<"|"<<ppn[j];
 gotoxy(59,1+j);
 cout<<"|"<<"Rp."<<jumlahb[j];
 gotoxy(72,1+j);
 cout<<"|";
 total_b=total_b+jumlahb[j];
 }
  
 cout<<""<<endl;
 cout<<"Total :Rp."<<total_b<<endl;
 return 0;
}