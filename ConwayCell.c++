


#include<iostream>
#include "ConwayCell.h" 
<<<<<<< HEAD
#include "Life.h"
=======
>>>>>>> 43ac65d8b15011ed08457f2e650e23ddcf788036


	ConwayCell::ConwayCell(char c) : 
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
			

	void ConwayCell::set_num_neighbors(int row, int col){ 

		ConwayCell* ptr;
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
		//check upper left diagonal
		if( (row-1)>=0 && (col-1)>=0){
			ptr = &board[row-1][col-1]; 
			if(ptr->_alive)
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
		//check cell bottom left diagonal
		if( (row+1) < board_row && (col-1)>=0){
			ptr = &board[row+1][col-1];
			if(ptr->_alive)
				++_num_neighbors; 
		}

		//check upper right diagonal
		if( (row-1)>=0 && (col+1)<board_col ){
			ptr = &board[row-1][col+1]
			if(ptr->_alive)
				++_num_neighbors;

		}
		//check bottom right diagonal
		if( (row+1)<board_row && (col+1)<board_col ){
			ptr = &board[row+1][col+1];
			if(ptr->_alive)
				++_num_neighbors;
		}	

	}

	void ConwayCell::update_status(){
		
		if( !_alive && (_num_neighbors==3) ){
			_alive = true;
			_c = "*";
		}
		if( alive){
			if(_num_neighbors < 2 || _num_neighbors > 3 ){
				_alive= false;
				_c = "."; 
			}
		}
	}
		

	
