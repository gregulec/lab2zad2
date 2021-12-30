#pragma once
#include <iostream>
using namespace std;

class PrimeFinder{
public:	
	int liczba;
	bool pierwsza();
	PrimeFinder(int liczba);
	~PrimeFinder();
	int nastepna(int n);
};

