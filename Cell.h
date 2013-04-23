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

Cell(char c){
	if( c == "*" || c == ".")
		ConwayCell cell = new ConwayCell(c);
	else
		FredkinCell cell = new FredkinCell(c);
}
int update_status(){
	
	return get()-> update_status();

}

int set_num_neighbors(){
	
	return get()-> set_num_neighbors();

}

int mutate(){
	
	return get()-> mutate();

}




