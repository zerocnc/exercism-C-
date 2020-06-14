#include "gigasecond.h"

namespace gigasecond {
	ptime advance(ptime xTime) {
		static const auto offSet = seconds(1000000000);
		return ptime(xTime) + offSet;
	}
}  // namespace gigasecond
