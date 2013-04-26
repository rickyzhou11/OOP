
#include "AbstractCell.h"

#include "Cell.h"


	AbstractCell::AbstractCell(){
		_num_neighbors = 0; 
		_c = 0;
		_alive = 0;
		age;

	}

	AbstractCell::AbstractCell(char c){
		_num_neighbors = 0; 
		_c = c;
		_alive = true;
		age;
	}

	AbstractCell::mutate(){
		
	}

	
	

