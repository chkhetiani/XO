namespace xo {
	void make_move(int index) {
		board[index] = to_move;
	}
	int d = 0;
	void set_player() {

		if(d == 1 && to_move == 'X'){
			to_move = 'O';
			std::cout << "you are playing with O!";
			Sleep(2000);
		}
		else if(d == 1 && to_move == 'O'){
			to_move = 'X';
			std::cout << "you are playing with X!";
			Sleep(2000);
		}
		else{
			std::cout << "you are playing with X!";
			d++;
			Sleep(2000);
		}	
		
	}
}
