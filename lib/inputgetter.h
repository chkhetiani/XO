namespace xo {
	int get_input() {
				 int choise;

    if (turn == 'X') {
        std::cout << "\tPLAYER 1[X] TURN :";
        std::cin >> choise;
    }
    if (turn == 'O') {
        std::cout << "\tPLAYER 2[O] TURN :";
        std::cin >> choise;
    }
    switch (choise)
    {
    case 1: row = 0; column = 0; break;
    case 2: row = 0; column = 1; break;
    case 3: row = 0; column = 2; break;
    case 4: row = 1; column = 0; break;
    case 5: row = 1; column = 1; break;
    case 6: row = 1; column = 2; break;
    case 7: row = 2; column = 0; break;
    case 8: row = 2; column = 1; break;
    case 9: row = 2; column = 2; break;
    default:
        std::cout << "Ra...?" << std::endl;
        break;
    }
    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = 'O';
        turn = 'X';
    }
    else {
        cout << "Ukve Shevsebulia :(" << endl;
        player_turn();
    }
    display_board();
                
	}
}
