#include "nucleotide_count.h"

namespace nucleotide_count {

	counter::counter() {
		mCount = { {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };
	}

	counter::counter(std::string str) {
		strand = str;
		mCount = { {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };

		// Doing error checking at insertion rather than going twice over list.
		for (char const& c : str) {
			if (!((c == 'A') || (c == 'T') || (c == 'C') || (c == 'G')))
				throw std::invalid_argument("validates_nucleotides");
			mCount[c]++;
		}
	}

	const std::map<char, int> counter::nucleotide_counts() const {
		return mCount;
	}

	int counter::count(const char ch) const {

		if (!((ch == 'A') || (ch == 'T') || (ch == 'C') || (ch == 'G')))
			throw std::invalid_argument("validates_nucleotides");

		return mCount.at(ch);
	}
	
}  // namespace nucleotide_count
