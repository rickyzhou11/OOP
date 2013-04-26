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
				
			if(c == '0'){
				this->_alive = true;
				_c = '+';
			}
			else if{ c == '+'}{
				this->_alive = true;}
			else{
				this->_alive = false;
			}
}

FredkinCell* FredkinCell::clone() const {

		return new FredkinCell(*this);
}

char FredkinCell::get_char(){
	if(age<10){
		char ch = age;
		return ch;
	}
	return _c;
}

bool FredkinCell:: is_alive(){
	return _alive;
}

void FredkinCell:: set_alive(){
	if(_alive){
		_alive = false;
		_c='-';
			
		
	
	}else {

		_alive = true;
		if(age>9){
			
		_c='+';	}
	}
}

void FredkinCell::increase_age(){
	if(_alive)
		++age;
	if(age > 9)
}		_c = "+";




