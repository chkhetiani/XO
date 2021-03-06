namespace xo {
	int get_input() {
		
		int choise;
		if (to_move == 'X'){
			cout << "Tplayer 1[X] TURN :";
			cin >> choise;
		}
		if (to_move == 'O') {
			cout << "Tplayer 2[0] TURN :";
		}
		return choise;
	}
}
