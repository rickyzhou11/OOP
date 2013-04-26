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

		for(int row = 0; row < _num_row; row++){

			board.push_back(temp);

			for(int col = 0; col < _num_col; col++){

				cell = board_copy[row][col] ;
				
				board[row].push_back(T(cell));
				
				if(board[row][col].is_alive()) 
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

 		for(int i = 0; i < _num_row; i++)
 			for(int j = 0; j < _num_col; j++)
 				count_neighbors[i][j] = 0;


		 while(total_turns > current_turn){
            
            for(int i =0; i< _num_row; i++){
               
                for(int j = 0; j< _num_col; j++){
                    if(board[i][j].is_alive() ){  //beginning of if statement

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



                    } // end of if statement
                } //end of second for loop

            }//end of first for loop

       

            //update status
			for(int i =0; i< _num_row; i++){
				for(int j = 0; j< _num_col; j++){
						int n_count=count_neighbors[i][j];

					 if(board[i][j].get_char() == '.'|| board[i][j].get_char() == '*'){
					 		if(board[i][j].is_alive()){
					 				if(n_count<2|| n_count>3){
					 					board[i][j].set_alive();
					 						--pop;
					 						}
					 		}
					 		else{

					 			if(n_count==3){
					 					board[i][j].set_alive();
					 						++pop;
					 						}

					 		}


					 }
					 else{

					 	if(board[i][j].is_alive()){
					 				if(n_count==0|| n_count==2||n_count==4){
					 					board[i][j].set_alive();
					 						--pop;
					 						}

					 		}
					 		else{

					 			if(n_count<1|| n_count>3){
					 					board[i][j].set_alive();
					 						++pop;
					 						}

					 		}


				}
					}
				}
			++current_turn;
			++gen;
			
		} //end of the while loop

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
		
			}
	
			cout << "" << endl;
		}
		
		//out.close();

	}



};

#endif
