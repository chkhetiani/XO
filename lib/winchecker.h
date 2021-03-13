namespace xo {
	bool check_win() {
		if(board[1] == 'X' && board[2] == 'X' && board[3] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[4] == 'X' && board[5] == 'X' && board[6] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[7] == 'X' && board[8] == 'X' && board[9] == 'X'){|
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[1] == 'X' && board[4] == 'X' && board[7] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[2] == 'X' && board[5] == 'X' && board[8] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[3] == 'X' && board[6] == 'X' && board[9] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[1] == 'X' && board[5] == 'X' && board[9] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[3] == 'X' && board[5] == 'X' && board[7] == 'X'){
			has_finished = true;
			result = "/n X Won";
		}
		else if(board[1] == 'O' && board[2] == 'O' && board[3] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[4] == 'O' && board[5] == 'O' && board[6] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[7] == 'O' && board[8] == 'O' && board[9] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[1] == 'O' && board[4] == 'O' && board[7] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[2] == 'O' && board[5] == 'O' && board[8] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[3] == 'O' && board[6] == 'O' && board[9] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[3] == 'O' && board[5] == 'O' && board[7] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else if(board[1] == 'O' && board[5] == 'O' && board[9] == 'O'){
			has_finished = true;
			result = "/n O Won";
		}
		else {
			has_finished = true;
			result = "Draw"
		}
		// board
		// ------------------
		// has_finished = true;
		// result = "X won" || "O won" || "draw"
	}
}
