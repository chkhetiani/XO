namespace xo {
	void make_move(int index) {
		// to_move
		// board
		
		board[index]=to_move;
	}
	
	void set_player() {
		// to_move
		if(to_move == 'O'){
		
			to_move='X';
	
		}
	
		else{
			to_move='O';
		}
	}
}
