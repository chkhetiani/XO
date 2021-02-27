namespace xo {
	void draw() {
		std::cout << "\n";
		for(int i = 0; i != board_length; i++){
			std::cout << "   " << board[i] << "  ";
			
			if(i == 2 || i == 5){
				std::cout << std::endl;
			}
		}
		std::cout << "\n\n";
	}
}
