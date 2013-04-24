


#include <iostream>


#include "ConwayCell.h" 



	ConwayCell::ConwayCell(char c) : 
			AbstractCell() 
			{ 
				if(c == '*')
					_alive = true;
				else
					_alive = false;
			}
			

	void ConwayCell::set_num_neighbors(int row, int col, vector<vector<char> > board, int board_row, int board_col){ 

		char c;
		//check the life status of the cell above it
		if ( (row-1)>= 0){
			c = board[row-1][col];
			if(c == 'a')
				++_num_neighbors; 
		}
		//check the life status of the cell to the left of current cell
		if( (col-1)>= 0){
			c = board[row][col-1];
			if(c == 'a')
				++_num_neighbors;
		}
		//check upper left diagonal
		if( (row-1)>=0 && (col-1)>=0){
			c = board[row-1][col-1]; 
			if(c == 'a')
				++_num_neighbors;
		}

		//check below current cell
		if( (row+1)< board_row){
			c = board[row+1][col]; 
			if(c-> _alive)
				++_num_neighbors;		
		}

		//check cell to the right of current cell
		if( (col+1) < board_col){
			c = board[row][col+1];
			if(c == 'a')
				++_num_neighbors;
		}
		//check cell bottom left diagonal
		if( (row+1) < board_row && (col-1)>=0){
			c = board[row+1][col-1];
			if(c == 'a')
				++_num_neighbors; 
		}

		//check upper right diagonal
		if( (row-1)>=0 && (col+1)<board_col ){
			c = board[row-1][col+1]
			if(c == 'a')
				++_num_neighbors;

		}
		//check bottom right diagonal
		if( (row+1)<board_row && (col+1)<board_col ){
			c = board[row+1][col+1];
			if(c == 'a')
				++_num_neighbors;
		}	

	}

	void ConwayCell::update_status(){
		
		if( !_alive && (_num_neighbors==3) ){
			_alive = true;
			_c = '*';
			_num_neighbors = 0;
		}
		if(_alive){
			if(_num_neighbors < 2 || _num_neighbors > 3 ){
				_alive= false;
				_c = '.'; 
				_num_neighbors = 0;
			}
		}
	}
		

	
