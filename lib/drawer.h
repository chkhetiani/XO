namespace xo {
	void draw() {
		for(int i=0;i<board_length;i++){
			std::cout << board[i];
			if(i==2||i==5){
				std::cout << endl;
			}
		}
	}
}
