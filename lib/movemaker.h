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
	// aq ukve upro rtuli iyo. mtavari problema iyo pirvel svlashi, romelic yovelitvis X aris.
	// gadavwyvite rom shemomeyvana d cvladi, romelic moimatebs mxolod pirveli svlis shemdeg da...
	// ...da sheasrulebs shemdegi svlebis pirobas, rom upro advili yopiliyo.
}
