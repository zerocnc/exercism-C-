#include "queen_attack.h"

namespace queen_attack {

	chess_board::chess_board() {
		wPosition.first = 0;
		wPosition.second = 3;

		bPosition.first = 7;
		bPosition.second = 3;

	}

	chess_board::chess_board(
		std::pair<int, int>x,
		std::pair<int, int>y): 
			wPosition(x),bPosition(y) {

		if (x == y)
			throw std::domain_error("");

		gameBoard = 
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n"
			"_ _ _ _ _ _ _ _\n";

		// Set positions
		gameBoard[x.first * 16 + (x.second * 2)] = 'W';
		gameBoard[y.first * 16 + (y.second * 2)] = 'B';
	}

	std::pair<int,int> chess_board::white() const {
		return wPosition;
	}

	std::pair<int, int> chess_board::black() const {
		return bPosition;
	}

	bool chess_board::can_attack() const {

		bool checkHorVer = (wPosition.first == bPosition.first) || (wPosition.second == bPosition.second);
		bool checkDia = abs(bPosition.first - wPosition.first) == abs(bPosition.second - wPosition.second);

		return checkHorVer || checkDia;
	}
	
}  // namespace queen_attack
