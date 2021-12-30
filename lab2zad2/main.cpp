#include "PrimeFinder.h"
#include <iostream>
using namespace std;

int main(){
	PrimeFinder k(3);
	if( k.pierwsza() ==true) cout<<"Liczba pierwsza"<< endl;
	if (k.pierwsza() == false) cout << "Liczba nie jest pierwsza" << endl;
	cout << k.nastepna(3);
}