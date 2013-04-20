//
//Cell.h
//


#include <cassert> // assert
#include <iostream> // cout, endl

#include "Handle.h"
#include "Life.h"
#include "AbstractCell.h"

struct Cell : Handle<AbstractCell> {
	Cell (AbstractCell* p) :
		Handle<AbstractCell> (p)
	{}


int get_neighbor(){
	
	return get()

}






