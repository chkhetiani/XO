namespace xo {
	int get_input() {
		// get input and return
		int lol;
		
		std::cout << "chose your move " << xo::to_move << ": ";
		std::cin >> lol;
		
		return lol;
	}
}
