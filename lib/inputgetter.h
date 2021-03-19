namespace xo {
	int get_input() {
		
		
		//int lo;
		//std::cout<<"Your Turn:  ";
	//	std::cin>>lo;
		//return lo;
		
		int choise;
		if (to_move == 'X'){
			std::cout<< "Tplayer 1[X] TURN :";
			std::cin >> choise;
		}
		if (to_move == 'O') {
			std::cout<< "Tplayer 2[0] TURN :";
			std::cin>>choise;
		}
		return choise;
	}
}
