namespace xo {
	void make_move(int index) {
		// to_move
		// board
		board[index]= to_move;
	}
	
	void set_player() {
		if(to_move == 'X'){
			to_move = 'O'
		}
		else{
			to_move = 'X'
		}
		// to_move
	}
}
