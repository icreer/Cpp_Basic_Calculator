#include "Gaussian.h"
#include <cmath>

using namespace gaussian;
using namespace std;

double quadrature::function(double x) {
	return pow(x, 4) - (2 * x) + 1;
}

double quadrature::gaussx(double N) {
	return 0;
}

double quadrature::gaussw(double N) {
	return 0;
}

double quadrature::Intagration() {
	return 0;
}