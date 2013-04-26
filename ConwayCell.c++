#include "ConwayCell.h"


ConwayCell::ConwayCell() :
	AbstractCell()
{
	    	_num_neighbors = 0;
		_c = '.';
		_alive = false;
		age = 0;

}

ConwayCell::ConwayCell(char c) :
	
	AbstractCell()
{

			_num_neighbors = 0;
			_c = c; 
			age = 0;
				
			if(c == '*'){
				this->_alive = true;
			}
			else{
				this->_alive = false;
			}
}

ConwayCell* ConwayCell::clone() const {

		return new ConwayCell(*this);
}

char ConwayCell::get_char(){
	return _c;
}

bool ConwayCell::is_alive(){
	return _alive;
}

void ConwayCell::set_alive(){
	if(_alive){
		_alive = false;
		_c='.';
	}else {
		_alive = true;
		_c='*';	
	}
}

void ConwayCell::increase_age(){
	
}

bool ConwayCell::need_to_mutate(){
	
}


