namespace xo {
	bool check_win() {
		// board
		// ------------------
		// has_finished = true;
		// result = "X won" || "O won" || "draw"
		if(board[0] == 'X' && board[1] == 'X' && board[2] == 'X')
		{
			std::cout<<"X Won the Game congrat";
		}
		else if(board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
		{
			std::cout<<"O Won The Game Congrat";
		}
		else if(board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
		{
			std::cout<<"X Won The Game Congrat";
		}
		else if(board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
		{
			std::cout<<"O Won the game congrat";
		}
		else if(board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
		{
			std::cout<<"X won the game congrat";
		}
		else if(board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
		{
			std::cout<<"O Won the game congrat";
		}
		
	}
}
