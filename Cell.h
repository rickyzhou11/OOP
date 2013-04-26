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


	Cell (AbstractCell* p) :
		Handle<AbstractCell> (p)
	{}



Cell(char c)
{
	if( c == '*' || c == '.')
		AbstractCell cell = new ConwayCell(c);
	else
		AbstractCell cell = new FredkinCell(c);
}

char get_char(){
	
	return get()->get_char();

}

bool is_alive(){
	return get()->is_alive();
}

void set_alive(){
	get()->set_alive();
}

// void mutate(){
// 	return get()-> mutate();
// }



};



#endif
