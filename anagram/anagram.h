#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <vector>
#include <string>
#include <set>
#include <algorithm>


namespace anagram {
	class anagram {
	public:
		anagram();
		anagram(const char*);
		~anagram();
		std::vector<std::string> matches(std::vector<std::string>);
	private:
		std::string _word;

	};
}  // namespace anagram

#endif // ANAGRAM_H