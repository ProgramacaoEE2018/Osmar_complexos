#include <math.h>

class Complexo {
private :
	float im, real;
public :
	Complexo(float xs, float ys) {
		real = xs;
		im = ys;
	};

	float Modulo();
	Complexo Conjugado();
	Complexo operator+(Complexo);
	Complexo operator-(Complexo);
	Complexo operator*(Complexo);
	Complexo operator/(Complexo);
};