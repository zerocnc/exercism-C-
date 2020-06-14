#include <string>
#include <vector>
#include <stdexcept>
#include "say.h"

namespace say {

	std::string _in_english(unsigned long long number, int factor, std::string s) {
		std::string say = in_english(number / factor) + s;
		if (number % factor != 0) {
			say += " " + in_english(number % factor);
		}
		return say;
	}

	std::string in_english(unsigned long long number) {
		std::vector<std::string> numbers =
		{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
		 "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
		 "nineteen", "twenty" };
		std::vector<std::string> tenths =
		{ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

		std::string say{};
		if (number <= 20) {
			say = numbers[number];
		}
		else if (number < 100) {
			say = tenths[(number / 10) % 10] + "-" + numbers[number % 10];
		}
		else if (number < 1000) {
			say = _in_english(number, 100, " hundred");
		}
		else if (number < 1000000) {
			say = _in_english(number, 1000, " thousand");
		}
		else if (number < 1000000000) {
			say = _in_english(number, 1000000, " million");
		}
		else if (number < 1000000000000) {
			say = _in_english(number, 1000000000, " billion");
		}
		else {
			throw std::domain_error("Illegal argument");
		}
		return say;
	}

}  // namespace say
