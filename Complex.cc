#include <iostream>
#include <string>
#include "Complex.h"
#include <cmath>

using namespace std;

Complex::Complex(){
	re_=0.;
	im_=0.;
}

Complex::Complex(double x, double y){
	re_=x;
	im_=y;
}

Complex::Complex(const Complex& copy){
	re_=copy.re_;
	im_=copy.im_;
}

//Complex::⁓Complex(){cout << "Chiamata deallocazione di memoria." << endl;}

void Complex::SetNumber(double x, double y){
	re_=x;
	im_=y;
}

double Complex::re() const {return re_;};
double Complex::im() const {return im_;};
double Complex::r() const {return (re_*re_+im_*im_);};
double Complex::phi() const {return (atan(im_/re_));};

void Complex::print() const {
	cout << "c="<<re_<<"+i*"<<im_<<"" << endl;
}

void Complex::String(const std::string& line) const{
	cout << line << endl;
}

Complex Complex::operator+(const Complex& rhs) const{
	double X = re_ + rhs.re_; 
	double Y = im_ + rhs.im_;
	return Complex(X,Y);
}

Complex Complex::operator*(const Complex& rhs) const{
	double X = re_ * rhs.re_; 
	double Y = im_ * rhs.im_;
	return Complex(X,Y);
}

Complex Complex::operator/(const Complex& rhs) const{
	double X = re_ / rhs.re_; 
	double Y = im_ / rhs.im_;
	return Complex(X,Y);
}

Complex Complex::operator*(const double& rhs) const{
	return Complex(re_*rhs,im_*rhs);
}

const Complex& Complex::operator=(const Complex& rhs){
	re_=rhs.re_;
	im_=rhs.im_;
	return *this;
}

const Complex& Complex::operator+=(const Complex& rhs){
	re_+=rhs.re_;
	im_+=rhs.im_;
	return *this;
}

const Complex& Complex::operator-=(const Complex& rhs){
	re_-=rhs.re_;
	im_-=rhs.im_;
	return *this;
}

const Complex& Complex::operator*=(const Complex& rhs){
	re_*=rhs.re_;
	im_*=rhs.im_;
	return *this;
}

const Complex& Complex::operator/=(const Complex& rhs){
	re_/=rhs.re_;
	im_/=rhs.im_;
	return *this;
}

Complex operator*(const double& a, const Complex& rhs){
	return(Complex(a*rhs.re(),a*rhs.im()));
}


ostream& operator<<(ostream& os, const Complex& rhs){
	os << "Stampa con ostream&.\nc=" << rhs.re() << "+i*" << rhs.im();
	return os;
}

