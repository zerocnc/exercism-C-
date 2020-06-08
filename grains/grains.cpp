#include "grains.h"

namespace grains {
	unsigned long long square(unsigned int n) {
		return 1Ull << (n-1);
	}

	unsigned long long Rec(unsigned int n) {
		if (n == 0)
			return 1;
		else
			return ( 1Ull << (n) ) + Rec(n - 1);
	}

	unsigned long long total() {
		unsigned int n = 63;
		
		return Rec(n);
	}

}  // namespace grains
