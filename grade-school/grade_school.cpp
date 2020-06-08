#include "grade_school.h"

namespace grade_school {
	
	school::school() {
		schoolRoster;
	}

	school::~school() {

	}

	bool school::empty() {
		return schoolRoster.empty();
	}

	std::map<int, std::vector<std::string>> school::roster(){

		return schoolRoster;
	}

	void school::add(std::string name, int grade) {
		schoolRoster[grade].push_back(name);
		std::sort(schoolRoster[grade].begin(), schoolRoster[grade].end());
		
	}

	std::map<int, std::vector<std::string>> school::roster() const{
		return schoolRoster;
	}

	std::vector<std::string> school::grade(int grade) const{

		if (schoolRoster.count(grade) == 0)
			return std::vector<std::string>();
		return schoolRoster.at(grade);
	}


}  // namespace grade_school
