#include "triangle.h"


namespace triangle {

	void isValid(double a, double b, double c) {

		// Test sides Triangle Inequality Theorem, also test if their non-negative. 
		if (a + b <= c || a + c <= b || b + c <= a) {
			throw std::domain_error("Invalid triangle");
		}
	}

	bool areSame(double x, double y) {
		return fabs(x - y) < DBL_EPSILON;
	}

	flavor kind(double a, double b, double c) {

		isValid(a, b, c);

		/*
		if (a == b && b == c)
			return flavor::equilateral;
		if (a == b || b == c || a == c)
			return flavor::isosceles;
			*/
		if (areSame(a, b) && areSame(b, c))
			return flavor::equilateral;
		if (areSame(a, b) || areSame(b, c) || areSame(a, c))
			return flavor::isosceles;

		return triangle::flavor::scalene;

	}

}  // namespace triangle
