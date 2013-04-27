//
//Cell.h
//

#ifndef Cell_h
#define Cell_h
#include <cassert> // assert
#include <iostream> // cout, endl


#include "Handle.h"
#include "AbstractCell.h"
#include "ConwayCell.h"
#include "FredkinCell.h"

using namespace std;

struct Cell : Handle<AbstractCell> {


	Cell (char c) :
		Handle<AbstractCell> (new FredkinCell(c))
	{

	}


char get_char(){
	
	return get()->get_char();

}

bool is_alive(){
	return get()->is_alive();
}

void set_alive(){
	return get()->set_alive();
}

void mutate(){

	Handle<AbstractCell> new_cell(new ConwayCell('*'));
	swap(new_cell);

}

bool need_to_mutate(){

	return get()->need_to_mutate();
}



void increase_age(){

	return get()-> increase_age();
}


};
#endif
