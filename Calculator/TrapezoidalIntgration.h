#pragma once

namespace Trap {
	class polyselect {
	public:
		void option();
		void select();
	};
	class setupfunction {
		
	public:
		void setA(float A);
		void setB(float B);
		void setC(float C);
		void setK(float K);
		float getA();
		float getB();
		float getC();
		float getK();
		void setup();
		double function(double x);
		
	};
	class Quadractic {
	public:
		void solver();
	};
	class intgral {
	public:
		void intgrate();
	};
}