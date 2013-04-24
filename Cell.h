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
	
	return get()-> set_num_neighbors(int x, int y);

}

ConwayCell& mutate(){
		
		get->mutate();
	}

};



#endif
