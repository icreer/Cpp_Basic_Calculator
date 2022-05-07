#include "TrapezoidalIntgration.h"
#include <iostream>
#include <cmath>
using namespace Trap;
using namespace std;

float a;
float b;
float c;
float k; 

void setupfunction::setA(float A) {
	a = A;
}
float setupfunction::getA() {
	return a;
}

void setupfunction::setB(float B) {
	b = B;
}
float setupfunction::getB() {
	return b;
}

void setupfunction::setC(float C) {
	c = C;
}
float setupfunction::getC() {
	return c;
}

void setupfunction::setK(float K) {
	k = K;
}
float setupfunction::getK() {
	return k;
}

void setupfunction::setup() {
	float input;
	cout << "Here is the setup of your polynomialy is: \n"
		<< "ax^k + b*x +c \n";
	cout << "Please enter in a: ";
	cin >> input;
	setA(input);
	cout << "Please enter in b: ";
	cin >> input;
	setB(input);
	cout << "Please enter in c: ";
	cin >> input;
	setC(input);
	cout << "Please enter in k: ";
	cin >> input;
	setK(input);
	cout << getA() << "x^" << getK() << "+" << getB() << "x +" << getC() << endl;
	cout << "Thank you, your set up funciton is compleate";
}

double setupfunction :: function(double x) {
	return (getA()*pow(x, 4)) + (getB() * x) + getC();
}

void intgral :: intgrate() {
	setupfunction fun;

	double upper;
	double lower;
	double usererror;
	cout << "Please enter the upper bound: ";
	cin >> upper;
	cout << "Please enter the lower bound: ";
	cin >> lower;
	cout << "Please enter the number of steps you want you want: ";
	cin >> usererror;
	
	double a = lower;
	double b = upper;
	double N = usererror;
	double h = (b - a)/N;
	double I = 0.5 * (fun.function(a) + fun.function(b));

	for (int k = 1; k < N; k++) {
		I = I + fun.function(a + k * h);
	}
	
	double result = I*h;
	cout << "The result of the intgral is " << result << endl;
}

void Quadractic::solver() {
	setupfunction suf;
	double solution1;
	double solution2;
	double t;
	if (suf.getK() != 2 ) {
		cout << "K must equal 2 for this program to work"<< endl;
	}
	else {
		t = pow(suf.getB(), 2) - (4.0 * suf.getA() * suf.getC());
		solution1 = ( -1.0 *suf.getB() + pow(t, 0.5)) / (2.0 *suf.getA());
		solution2 = (-1.0 * suf.getB() - pow(t, 0.5)) / (2.0 * suf.getA());
		cout << "The first Solution is " << solution1 << "\n";
		cout << "The second solution is " << solution2 << endl;
	}
}

void polyselect::option() {
	cout << "\nPlease select what you want to do: \n"
		<< "\t1. Edit function\n"
		<< "\t2. Intgral\n"
		<< "\t3. Quit\n"
		<< "\t4. Quadractic solver\n";
}

void polyselect::select() {
	setupfunction suf;
	intgral gral;
	Quadractic quad;
	suf.setup();
	int input;
	bool mathisfun = true;
	while (mathisfun) {
		option();
		cin >> input;
		if (input == 1) {
			suf.setup();
		}
		else if (input == 2) {
			gral.intgrate();
		}
		else if (input == 3) {
			mathisfun = false;
		}
		else if (input == 4) {
			quad.solver();
		}
	}
}