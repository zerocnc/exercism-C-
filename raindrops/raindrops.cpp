#include "raindrops.h"

namespace raindrops {
	std::string convert(int n) {
		std::string str{ "" };
		bool fNonFactor = false;

		if (n == 1) {
			str += "1";
			fNonFactor = true;
		}
		if (n % 3 == 0)
		{
			str += "Pling";
			fNonFactor = true;
		}
		if (n % 5 == 0) {
			str += "Plang";
			fNonFactor = true;
		}
		if (n % 7 == 0) {
			str += "Plong";
			fNonFactor = true;
		}
		if (!fNonFactor) {
			str = std::to_string(n);
		}

		return str;
	}
}  // namespace raindrops
