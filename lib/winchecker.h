namespace xo {
	bool check_win() {
		// board
		// ------------------
		// has_finished = true;
		// result = "X won" || "O won" || "draw"
		// horizontal
		if(board[0] == 'X' && board[1] == 'X' && board[2] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		else if(board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		else if(board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		//vertical
		else if(board[0] == 'X' && board[3] == 'X' && board[6] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[0] == 'O' && board[3] == 'O' && board[6] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		else if(board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		else if(board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		// ix
		else if(board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[0] == 'O' && board[4] == 'O' && board[8] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		else if(board[2] == 'X' && board[4] == 'X' && board[6] == 'X')
		{
			has_finished = true;
			result = "X Won the Game congrat";
		}
		else if(board[2] == 'O' && board[4] == 'O' && board[6] == 'O')
		{
			has_finished = true;
			result = "O Won the Game congrat";
		}
		else if(board[0] == 'X' && board[1] == 'O' && board[2] == 'X' && board[3] == 'O' && board[4] == 'X' && board[5] == 'O' && board[6] == 'X' && board[7] == 'O' && board[8] == 'X' )
		{
			has_finished = true;
			result = "Draw";
		}
	}
}
// 0 1 2
// 3 4 5
// 6 7 8
