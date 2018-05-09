#include <math.h>
#include "Complexo.h"

float Complexo::Modulo() {
	return sqrt(real*real + im * im);
}
Complexo Complexo::Conjugado() {
	return Complexo(real, -im);
}

Complexo Complexo::operator+(Complexo z1) {
	return Complexo(real + z1.real, im + z1.im);
}

Complexo Complexo::operator-(Complexo z1) {
	return Complexo(real - z1.real, im - z1.im);
}

Complexo Complexo::operator*(Complexo z1) {
	return Complexo(real * z1.real - im * z1.im, real * z1.real + im * z1.im);
}

Complexo Complexo::operator/(Complexo z1) {
	return Complexo((real * z1.real + im * z1.im) / (sqrt(z1.real*z1.real + z1.im * z1.im)*sqrt(z1.real*z1.real + z1.im * z1.im)), (im * z1.real - real * z1.im) / (sqrt(z1.real*z1.real + z1.im * z1.im)*sqrt(z1.real*z1.real + z1.im * z1.im)));
}