#include<string>

namespace xo {
	char board_length = 9;
	char board[board_length] = { '-','-','-','-','-','-','-','-','-' };
	// ----------------------
	char to_move = 'X';
	bool has_finished = false;
	std::string result;
}
