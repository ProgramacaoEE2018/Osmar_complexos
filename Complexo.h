#include <math.h>

class Complexo {
private :
	float im, real;
public :
	Complexo(float xs, float ys) {
		real = xs;
		im = ys;
	}

	float Modulo() {
		return sqrt(real*real + im * im);
	}
	Complexo Conjugado() {
		return Complexo(real, -im);
	}

	Complexo operator+(Complexo z1) {
		return Complexo(real + z1.real, im + z1.im);
	}

	Complexo operator-(Complexo z1) {
		return Complexo(real - z1.real, im - z1.im);
	}

	Complexo operator*(Complexo z1) {
		return Complexo(real * z1.real - im* z1.im, real * z1.real + im * z1.im);
	}

	Complexo operator/(Complexo z1) {
		return Complexo((real * z1.real + im * z1.im)/(sqrt(z1.real*z1.real + z1.im * z1.im)*sqrt(z1.real*z1.real + z1.im * z1.im)), (im * z1.real - real * z1.im) / (sqrt(z1.real*z1.real + z1.im * z1.im)*sqrt(z1.real*z1.real + z1.im * z1.im)));
	}
};