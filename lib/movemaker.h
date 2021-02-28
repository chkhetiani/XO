namespace xo {
	void make_move(int index) {
		board[index] = to_move;
	}
	int d = 0;
	void set_player() {
		if(to_move == 'X'){
            to_move = 'O';
            std::cout << "you are playing with O!";
            Sleep(2000);
        }
        else{
            to_move = 'X';
            std::cout << "you are playing with X!";
            Sleep(2000);
        }
	
		
	}
}
