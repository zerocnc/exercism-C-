#include "anagram.h"

namespace anagram {

	anagram::anagram()
	{
		_word = "";
	}

	anagram::anagram(const char* str)
	{
		_word = std::string(str);
	}

	anagram::~anagram()
	{

	}

	std::vector<std::string> anagram::matches(std::vector<std::string> vecString)
	{
		std::vector<std::string> vecRet;
		auto length = _word.size();
		std::multiset<char> temp;
		std::multiset<char> word;
		std::string tempWord = _word;

		transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
		word.insert(tempWord.begin(), tempWord.end());

		for (auto currentStr : vecString) 
		{
			std::string originalStr = currentStr;
			transform(currentStr.begin(), currentStr.end(), currentStr.begin(), ::tolower);

			if (tempWord != currentStr) {
				temp.insert(currentStr.begin(), currentStr.end());
			
				if (temp == word) {
					vecRet.push_back(originalStr);
				}
			}

			temp.clear();
		}
		return vecRet;
	}

}  // namespace anagram
