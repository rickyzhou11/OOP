#include "FredkinCell.h"


FredkinCell::FredkinCell() :
	AbstractCell()
{
	    	_num_neighbors = 0;
		_c = '.';
		_alive = true;
		age = 0;

}

FredkinCell::FredkinCell(char c) :
	
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

FredkinCell* FredkinCell::clone() const {

		return new FredkinCell(*this);
}

char FredkinCell::get_char(){
	return _c;
}

bool FredkinCell:: is_alive(){
	return _alive;
}

void FredkinCell:: set_alive(){
	if(_alive){
		_alive = false;

		if(_age>9){
		
		_c='+';
			}
		
	}
	}else {
		_alive = true;
		_c='-';	
	}
}




