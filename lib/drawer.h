namespace xo {
	void draw() {
		for(int i=0;i<board_length-'0';i++){
			cout << board[i];
			if(i==3||i==6){
				cout << "\n";
			}
		}
	}
}
