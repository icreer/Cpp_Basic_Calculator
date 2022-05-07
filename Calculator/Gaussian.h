#pragma once
namespace gaussian {
	class quadrature {
	public:
		double function(double x);
		double gaussx(double N);
		double gaussw(double N);
		double Intagration();
	};
	class elimination {
		public:
			void elim();
	};
}