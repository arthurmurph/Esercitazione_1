#include <iostream>
#include <string>
#ifndef Complex_h
#define Complex_h
using namespace std;

class Complex{
	public:
	
	//costruttori
	Complex(); //costruttore di default
	Complex(double x, double y); //costruttore standard
	Complex(const Complex& copy); //costruttore di copia
	//⁓Complex();
	
	//setters
	void SetNumber(double x, double y);

	//getters
	double re() const;
	double im() const;
	double r() const;
	double phi() const;
	void print() const;
	void String(const std::string& line) const;

	//operatori di overloading
	Complex operator+(const Complex& rhs) const;//somma
	Complex operator*(const Complex& rhs) const;//prodotto
	Complex operator/(const Complex& rhs) const;//divisione
	Complex operator*(const double& rhs) const;

	const Complex& operator=(const Complex& rhs);
	const Complex& operator+=(const Complex& rhs);
	const Complex& operator-=(const Complex& rhs);
	const Complex& operator*=(const Complex& rhs);
	const Complex& operator/=(const Complex& rhs);



	private:
	double re_;
	double im_;
	
};

Complex operator*(const double& a, const Complex& rhs);// prende in input l'indirizzo di 'a' e la classe Complex
ostream& operator<<(ostream& os, const Complex& rhs);

#endif
