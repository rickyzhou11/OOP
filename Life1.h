#ifndef Life_h
#define Life_h

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <fstream>
#include "ConwayCell.c++"

using namespace std;
 

template <typename T>
 class Life{

	private:

		vector<T> temp;
		vector<vector<T> > board; 

		int gen; 

		int pop;

		int row;

		int col;	
	
		const int _num_row;

		const int _num_col;
	
	public:


	Life(int row_num, int col_num, vector<vector<char> > board_copy) :
			_num_row (row_num),
			_num_col (col_num)
	{

				
		 char cell;

		pop = 0;

		gen = 0;

		// in >> num_row >> num_col;
		// cout << num_row << endl;
		
		//cout << num_col << endl;
		for(int row = 0; row < _num_row; row++){

			board.push_back(temp);

			for(int col = 0; col < _num_col; col++){

				cell = board_copy[row][col] ;
				//cout << cell << endl;
				//cout << "IN LIFE CONSTRUCTOR: " << cell << endl;
				// ConwayCell cell = T(cell);
				// ConwayCell* cell_ptr = cell.clone();   
				board[row].push_back(T(cell));
				
				//cout << "here" << endl;
				if(board[row][col].alive()) 
					pop++;	
				

			}
		
			
		}

	}

	//-------------------
	// play
	//------------------
 
	
	void play(int total_turns){
 		int current_turn = 0;
 		vector<vector<char> > board_copy;
 		bool was_alive;
 		int count_neighbors[_num_row][_num_col];
		 while(total_turns > current_turn){
            

            board_copy = copy_board();
            for(int i =0; i< _num_row; i++){
               
                for(int j = 0; j< _num_col; j++){
                    if(board[i][j].alive()){

                        if((i-1)>=0)
                        	count_neighbors[i-1][j] = count_neighbors[i-1][j] + 1;
                       
                        if((j-1)>=0)
                        	count_neighbors[i][j-1] += 1;

                        if((i+1)<_num_row)   
                        	count_neighbors[i+1][j] += 1;

                        if((j+1)< _num_col)
                        	count_neighbors[i][j+1]+= 1;
               
                    if(board[i][j].get_char() == '.'|| board[i][j].get_char() == '*'){
                        if((i-1)>=0 && (i-1)>=0)
                        	(count_neighbors[i-1][j-1]) += 1;

                        if((i+1)< _num_row && (j+1)< _num_col)
                        	(count_neighbors[i+1][j+1]) += 1;

                        if((i-1)>=0 && (j+1)< _num_col)
                        	count_neighbors[i-1][j+1] += 1;

                        if((j-1)>=0 && (i+1)< _num_row)
                        	(count_neighbors[i+1][j-1]) += 1;
                    }   



                    }
                }

            }

       
        cout << "updates num_neighbors" << endl;
     for (int i = 0; i < _num_row; ++i) {
            
            for (int j = 0; j < _num_col; ++j) {
                cout << count_neighbors[i][j]; 
            }
            cout << "" << endl;
        }


			for(int i =0; i< _num_row; i++){
				for(int j = 0; j< _num_col; j++){
					was_alive = board[i][j].alive();
					
					board[i][j].update_status();
					

					if(was_alive){
						if(!board[i][j].alive())
							--pop;
							cout << "I used to be alive: " << i << j << endl;
								} 
					
					if(!was_alive)
						if(board[i][j].alive())
							--(pop);
						
				} 	

			}
			++current_turn;
			++gen;
			
		}

	}
		
	
	 
        //-------------------
        // output
        //------------------

	
	void output(){

		//ofstream out;
		//out.open("RunLife.out");
		cout << "generation = " << gen << ", Population = " << pop << endl;	
		
		for(int i =0; i < _num_row; i++){
		
			 for(int j =0; j < _num_col; j++){
			 	cout << board[i][j].get_char();
		//		out << board[i][j]->get_char();
			}
	
			cout << "" << endl;
		}
		
		//out.close();

	}

	
	vector<vector<char> > copy_board(){
		vector<char> temp;
		vector<vector<char> > board_copy; 

		for(int i = 0; i < _num_row; i++){
			board_copy.push_back(temp);
			for(int j= 0; j< _num_col; j++){
				if(board[i][j].alive())
					board_copy[i].push_back('a');
				else
					board_copy[i].push_back('d');
			}

		}
 		
		return board_copy;

	}



};

#endif
