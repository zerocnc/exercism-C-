#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <vector>
#include <map>
#include <string>
#include <algorithm>


namespace grade_school {
	class school {
		public:
			school();
			~school();

			void add(std::string, int);
			bool empty();
			std::vector<std::string> grade(int) const;

			std::map<int, std::vector<std::string>> roster();
			std::map<int, std::vector<std::string>> school::roster() const;
			
		private:
			std::map<int, std::vector<std::string>> schoolRoster;
	};
}  // namespace grade_school

#endif // GRADE_SCHOOL_H