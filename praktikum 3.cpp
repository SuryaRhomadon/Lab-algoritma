#include<iostream>
using namespace std;

int main() {
	int x, y, tambah, kurang, kali, bagi;
	
	cout<< "masukan bilangan kesatu";
	cin>> x;
	cout<< "masukan bilangan kedua: ";
	cin>> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x%y;
	
	cout<<"hasil penjumlahan x dan y adalah " << tambah << endl;
	cout<<"hasil pengurangan x dan y adalah " << kurang << endl;
	cout<<"hasil perkalian x dan y adalah " << kali << endl;
	cout<<"hasil pembagian x dan y adalah " << bagi << endl;
	
	
}
