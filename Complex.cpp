#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Complex.h"

using namespace std;

int main(int argc, char *argv[]){

	if(argc!=5){
		cout << "Dare in input il numero complesso del tipo a + i b" << endl; 
		return (-1);
	}	

	double x, y, r, phi, a=2;
	
	//assegnazione dei valori
	x=atof(argv[1]);
	y=atof(argv[4]);

	//dichiarazione della classe e del puntatore ad essa
	Complex Nd;
	Complex N1(x, y);
	Complex N2(2.3, 4.5), N3, N4;
	Complex *R=&N1;
	
	//presa dati di r e phi	
	R->r();
	R->phi();
	
	//stampa numero nel modo classico
	R->String("numero complesso:");
	R->print();

	//somma
	
	N3 = N1 + N2;
	R->String("somma:");
	N3.print();

	//uguaglianza
	N4 = N1;
	R->String("uguaglianza:");
	N4.print();
	
	//moltiplicazione per scalare
	N4 = a * N1;
	R->String("moltiplicazione per scalare:");
	N4.print();
	
	//Complex N5 = N1 + N2;
	cout << N4 << endl;	
		
	return 0;
}
