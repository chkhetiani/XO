namespace xo {
	int get_input() {
				 int to_move;

    if (turn == 'X') {
        std::cout << "\tPLAYER 1[X] TURN :";
        std::cin >> to_move;
    }
    if (turn == 'O') {
        std::cout << "\tPLAYER 2[O] TURN :";
        std::cin >> to_move;
    }
	}
