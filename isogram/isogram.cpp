#include <cctype>
// #include <map>
#include <unordered_set>

#include "isogram.h"

namespace isogram {

	bool is_isogram(const std::string& str) {
		std::unordered_set<unsigned char> u_set;
		unsigned char c;

		if (str.empty())
			return true;

		for (auto it = str.begin(); it != str.end(); ++it) {
			c = *it;

			if (std::isalpha(c)) 
			{
				c = std::toupper(c);
				if (u_set.find(c) == u_set.end())
					u_set.insert(c);
				else {
					return false;
				}
			}
		}
		return true;
	}
}  // namespace isogram
