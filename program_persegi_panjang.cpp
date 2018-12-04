#include <iostream>

using namespace std;

    main()
{
    int panjang,lebar,luas;
    cout << "Nilai panjang persegi:"; //inputan Panjang
    cin>>panjang;
    cout<<"Nilai Lebar perseg:"; // inputan Lebar
    cin>>lebar;

    luas=panjang*lebar; //rumus
    cout<<"\n\nHasil luas segi empat="<<panjang<<"*"<<lebar<<":"<<luas;
    cout<<"\n\nhasil keliling segi empat=2*("<<panjang<<"+"<<lebar<<"):"<<2*(panjang+lebar);
}

