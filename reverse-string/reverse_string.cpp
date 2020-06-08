#include "reverse_string.h"

namespace reverse_string {
	std::string reverse_string(std::string str) {
		char x{'\0'};

		if (str.length() != 0) {
			for (int ndx = 0; ndx < str.length() / 2; ++ndx) {
				x = str[ndx];
				str[ndx] = str[str.length() - ndx - 1];
				str[str.length() - ndx - 1] = x;
			}
		}

		return str;
	}
}  // namespace reverse_string
