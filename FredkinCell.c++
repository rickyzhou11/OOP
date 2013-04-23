#include<iostream>
#include "ConwayCell.h" 
#include "AbstractCell.h"

#include "Life.h"



	FredkinCell::ConwayCell(char c) : 
			AbstractCell(),
			_num_neighbors (0),
			_age (0),
			_c(c) 
			{ 
				if(c == "*")
					_alive = true;
				else
					_alive = false;
			}
			

	void FredkinCell::set_num_neighbors(int row, int col){ 

		FredkinCell* ptr;
		//check the life status of the cell above it
		if ( (row-1)>= 0){
			ptr = &board[row-1][col];
			if(ptr->_alive)
				++_num_neighbors; 
		}
		//check the life status of the cell to the left of current cell
		if( (col-1)>= 0){
			ptr = &board[row][col-1];
			if(ptr-> _alive)
				++_num_neighbors;
		}

		//check below current cell
		if( (row+1)< board_row){
			ptr = &board[row+1][col]; 
			if(ptr-> _alive)
				++_num_neighbors;		
		}

		//check cell to the right of current cell
		if( (col+1) < board_col){
			ptr = &board[row][col+1];
			if(ptr->_alive)
				++_num_neighbors;
		}

	}

	void FredkinCell::update_status(){
		
		if( !_alive && (_num_neighbors==3) ){
			_alive = true;
			_c = "*";
			_num_neighbors = 0;
		}
		if( alive){
			if(_num_neighbors < 2 || _num_neighbors > 3 ){
				_alive= false;
				_c = "."; 
				_num_neighbors = 0;
			}
		}
	}
		
}
	
