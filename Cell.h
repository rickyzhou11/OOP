//
//Cell.h
//

#ifndef Cell_h
#define Cell_h
#include <cassert> // assert
#include <iostream> // cout, endl


#include "Handle.h"
#include "AbstractCell.c++"
using namespace std;

struct Cell : Handle<AbstractCell> {
	Cell (AbstractCell* p) :
		Handle<AbstractCell> (p)
	{}


void void set_num_neighbors(const int row, const int col , vector< vector<char> > board_copy , const int board_row , const int board_col ){
	
	return get()->set_num_neighbors(row, col, board_copy, board_row, board_col);

}

// Cell(char c){
// 	if( c == '*' || c == '.')
// 		AbstractCell cell = new ConwayCell(c);
// 	else
// 		AbstractCell cell = new FredkinCell(c);
// }

void get_char(){
	
	return get()->get_char();

}

bool is_alive(){
	return get()->is_alive();
}

char set_alive(){
	return get()->set_alive();
}

mutate(){
	return get()-> mutate();
}



};



#endif
