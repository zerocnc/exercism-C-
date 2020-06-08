#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <iostream>
#include <exception>

namespace nucleotide_count {

	class counter {
	public:
		counter();
		counter(const std::string);
		const std::map<char, int> nucleotide_counts() const;
		int count(const char) const;
	private:
		std::map<char, int> mCount;
		std::string strand;
	};

}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H