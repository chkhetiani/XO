namespace xo {
	void make_move(int index) {
		// to_move
		// board
		
		board[index]=to_move;
	}
	
	void set_player() {
		// to_move
		if(to_move == 'o'){
		
			to_move='x';
	
		}
	
		else{
			to_move='o'
		}
	}
}
