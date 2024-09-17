//unary => satu buah operand, contoh: 5 
//unary => dua buah operand, contoh: 5 + 10
// ternary=> satu tiga operand, contoh : (5 + 10) - 5

#include <iostream>
using namespace std;

int main () {
	int a,b,c = 0, d = 0;
	
	cout<< "masukan nilai A: ";
	cin>> a;
	cout<< "masukan nilai: ";
	cin>> b;
	
	c=a%b;
	d=a*b;
	
	cout<< "hasil dari C = A % B = " << c << endl;
	cout<< "hasil dari D = A * B = " << d << endl;
	
	
	return 0;
	
	
}
