#include "PrimeFinder.h"
#include <iostream>
using namespace std;

PrimeFinder::PrimeFinder(int liczba){
	this->liczba = liczba;
}

PrimeFinder::~PrimeFinder(){
}

bool PrimeFinder::pierwsza(){
	for (int i = 2; i <= liczba; i++){
		if (i == liczba){
			return true;
		}
		else{
			if (liczba%i == 0){
				return false;
			}
		}
	}
	
};

int PrimeFinder::nastepna(int n){
	if (pierwsza() == true) return n;
	else nastepna(n + 1);
	}