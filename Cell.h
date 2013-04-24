//
//Cell.h
//

#ifndef Cell_h
#define Cell_h
#include <cassert> // assert
#include <iostream> // cout, endl
#include "Life.h"
#include "Handle.h"
#include "AbstractCell.h"

using namespace std;

struct Cell : Handle<AbstractCell> {
	Cell (AbstractCell* p) :
		Handle<AbstractCell> (p)
	{}

Cell(char c){
	if( c == '*' || c == '.')
		AbstractCell* cell = new ConwayCell(c);
	else
		AbstractCell* cell = new FredkinCell(c);
}
int update_status(){
	
	return get()-> update_status();

}

int set_num_neighbors(){
	
	return get()-> set_num_neighbors(int row, int col, vector< vector<char> > board_copy, int board_row, int board_col);

}

ConwayCell& mutate(){
		
		get->mutate();
	}

};



#endif
