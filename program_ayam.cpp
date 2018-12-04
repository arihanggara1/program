#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int x,Jlh_anak;
	system("color a");
	cout<<"_______________"<<endl;
	cout<<"Ari Hanggara"<<endl;
	cout<<""<<endl;
	cout<<"Masukkan jumlah bola dalam keranjang"<<endl;
	cin>>Jlh_anak;
	cout<<"Mari kita ambil bola sambil berhitung mulai dari"<<Jlh_anak<<endl;
	cout<<"Mulai Berhitung !"<<endl;

	for (x=Jlh_anak;x>0;x--)
	{
		if (x>1)
			cout<<"jumlah bola ada"<<x<<"diambil satu tinggal"<<x-1<<endl;
		else if (x-1)
			cout<<"Jumlah Bola ada 1 di ambil satu tinggal keranjangnya"<<endl;		
	}
	getch();
	return 0;
}