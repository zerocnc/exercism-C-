#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <string>
#include <stdexcept>

namespace queen_attack {

	class chess_board {
	public:
		operator std::string() const { return gameBoard; }

		chess_board();
		chess_board(std::pair<int, int>, std::pair<int, int>);
		std::pair<int, int> white()const;
		std::pair<int, int> black()const;

		bool can_attack() const;

	private:
		std::pair<int, int> wPosition;
		std::pair<int, int> bPosition;

		std::string gameBoard;
	};


}  // namespace queen_attack

#endif // QUEEN_ATTACK_H