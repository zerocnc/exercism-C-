#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <string>
#include <algorithm>
#include <cctype>
#include <map>

namespace pangram {
	bool is_pangram(const std::string);
}  // namespace pangram

#endif // PANGRAM_H