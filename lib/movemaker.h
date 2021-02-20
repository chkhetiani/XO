namespace xo {
	void make_move(int index) {
		board[index] = to_move;
		// to_move
		// board
	}
	
	void set_player() {
		if (to_move == 'O'){
			to_move = 'X';
		}
		else {
			to_move = 'O';
		}
		// to_move
	}
}
