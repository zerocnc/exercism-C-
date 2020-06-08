#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
	class space_age {
	public:
		space_age(double seconds) : _ageSeconds{ seconds } {}

		double on_earth() const {
			return _ageSeconds / 31557600.0 ;
		}

		double on_mercury() const {
			return on_earth() / 0.2408467;
		}

		double on_venus() const {
			return on_earth() / 0.61519726;
		}

		double on_mars() const {
			return on_earth() / 1.8808158;
		}

		double on_jupiter() const {
			return on_earth() / 11.862615;
		}

		double on_saturn() const {
			return on_earth() / 29.447498;
		}

		double on_uranus() const {
			return on_earth() / 84.016846;
		}

		double on_neptune() const {
			return on_earth() / 164.79132;
		}

		double seconds() const { return _ageSeconds; }
	private:
		double _ageSeconds;
	};

	
}  // namespace space_age

#endif // SPACE_AGE_H