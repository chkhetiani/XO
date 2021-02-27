#include <iostream>
#include "windows.h."
#include "lib/data.h"
#include "lib/drawer.h"
#include "lib/inputgetter.h"
#include "lib/movemaker.h"
#include "lib/winchecker.h"

int main() {
	
	while(!xo::has_finished) {
		xo::set_player();
		system("cls");
		xo::draw();
		int index = xo::get_input();
		system("cls");
		xo::make_move(index);
		xo::check_win();
	}
	
	system("cls");
	xo::draw();
	std::cout << xo::result;
}
