#include "pangram.h"
#include <locale>
#include <iostream>

namespace pangram {

	bool charIsValid(unsigned ch) {
		return (isalpha(ch) || isspace(ch));
	}

	bool is_pangram(const std::string str) {
		bool fIsPanagram = false;
		std::string temp = str;

		std::locale loc;
		for (std::string::size_type i = 0; i < str.length(); ++i)
			temp[i] = std::tolower(str[i], loc);

		std::map<char, bool> arr = {};
		int currNumLetters = 0;

		for (const char& ch : temp)
		{
			std::map<char, bool>::iterator it = arr.find(ch);

			if ((it != arr.end()) && charIsValid(ch))
			{
				fIsPanagram = false;
				break;
			}
			else
			{
				if (isalpha(ch))
				{
					arr.insert(std::pair<char, bool>(ch, true));
					currNumLetters++;
				}
			}
		}

		// Check size of map.
		if (arr.size() == 26)
		{
			fIsPanagram = true;
		}
		else
		{
			fIsPanagram = false;
		}

		return fIsPanagram;
	}

}  // namespace pangram