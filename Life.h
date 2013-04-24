#ifndef Life_h
#define Life_h

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>


using namespace std;
 

template <typename T>
 class Life{

	public:

		vector< vector<T> > board; 

		int gen; 

		int pop;

		int row;

		int col;	
	
		int num_row;

		int num_col;
	
		Life(iostream& in);

		void play(int total_turns);

		void output(ostream& out); 

};
	template <typename T>
	Life<T>::Life(iostream& in){

		int num_row;

		int num_col;
		char cell;

		pop = 0;

		gen = 0;

		in >> num_row;

		in >> num_col;
	
		for(int row = 0; row < num_row; row++){

			board.push_back(vector<T>());

			for(int col = 0; col < num_col; col++){

				in >> cell; 

				board[row].push_back(T(cell));
			
				if(board[row][col]._alive) 
					pop++;	

			}
		
			
		}

	}

	//-------------------
	// play
	//------------------
 
	template <typename T>
	void Life<T>::play(int total_turns){
 		int current_turn = 0;
 		vector<vector<char> > board_copy;
		while(total_turns > current_turn){
	
			for(int i =0; i< num_row; i++){
			
				for(int j = 0; j< num_col; j++){
					board_copy = copy_board();
					board[i][j]->set_num_neighbors(i,j, board_copy, num_row, num_col);
					}
				} 

			for(int i =0; i< num_row; i++){
				for(int j = 0; j< num_col; j++){
					board[i][j]->update_status();
				} 

			}
			current_turn++;

		}
			output();


	}
	 
        //-------------------
        // output
        //------------------

	template <typename T> 
	void Life<T>::output(ostream& out){

		out << "generation = " << gen << ", Population = " << pop << endl;	
		
		for(int i =0; i < num_row(); i++){
		
			 for(int j =0; j < num_col(); j++)
				
				out << board[i][j];
	
				out << endl;
		}
		
		out << endl;
	}

	
	vector<vector<char> > Life<T>::copy_board(){

		vector<vector<char> > board_copy; 

		for(int i = 0; i < num_row; i++){
			board_copy.push_back(vector<char>);
			for(int j= 0; j< num_col; j++){
				if(board[i][j]->alive())
					board_copy[i].push_back('a');
				else
					board_copy[i].push_back('d');
			}

		}

	}

#endif
