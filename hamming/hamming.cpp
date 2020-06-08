#include "hamming.h"

namespace hamming {
	int compute(const std::string& str1,const std::string& str2) {
		int distance = 0;

		if (str1.length() == str2.length())
		{
			for (int ndx = 0; ndx < str1.length(); ++ndx)
				if (str1[ndx] != str2[ndx])
					distance++;
		}
		else if (str1.length() > str2.length())
			throw std::domain_error("domain_error_when_first_string_is_longer");
		else if (str1.length() < str2.length())
			throw std::domain_error("domain_error_when_second_string_is_longer");

		return distance;
	}
}  // namespace hamming
