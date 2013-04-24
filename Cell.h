//
//Cell.h
//

#ifndef Cell_h
#define Cell_h
#include <cassert> // assert
#include <iostream> // cout, endl


// #include "Life.h"
#include "Handle.h"
#include "AbstractCell.h"

using namespace std;

struct Cell : Handle<AbstractCell> {
	Cell (AbstractCell* p) :
		Handle<AbstractCell> (p)
	{}

// Cell(char c){
// 	if( c == '*' || c == '.')
// 		AbstractCell cell = new ConwayCell(c);
// 	else
// 		AbstractCell cell = new FredkinCell(c);
// }
void update_status(){
	
	return get()->update_status();

}

void set_num_neighbors(int row, int col, vector< vector<char> > board_copy, int board_row, int board_col){
	
	return get()->set_num_neighbors(row, col, board_copy, board_row, board_col);

}

// ConwayCell& mutate(){
		
// 		get->mutate();
// 	}

};



#endif
