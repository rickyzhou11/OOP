#include "FredkinCell.h"


FredkinCell::FredkinCell() :
	AbstractCell()
{
	    _num_neighbors = 0;
		_c = '-';
		_alive = false;
		age = 0;

}

FredkinCell::FredkinCell(char c) :
	
	AbstractCell()
{

			_num_neighbors = 0;
			_c = c; 
			age = 0;
				
			if(c == '-'){
				_alive = false;
				
			}
			else{
				_alive = true;
			}
}

FredkinCell* FredkinCell::clone() const {

		return new FredkinCell(*this);
}

char FredkinCell::get_char(){
	if(age<10 && _alive){
		return '0'+age;
	}
	return _c;
}

bool FredkinCell::is_alive(){
	return _alive;
}

void FredkinCell::set_alive(){
	if(_alive){
		_alive = false;
		_c='-';
	}
	else {

		_alive = true;
		if(age>9){
			
		_c='+';	}
	}
}

void FredkinCell::increase_age(){
	if(_alive)
		++age;
	else if(age > 9)
		_c = '+';

}

bool FredkinCell::need_to_mutate(){

		if(age >= 2)
			return true;
		else
			return false; 
	}




