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

		while(total_turns > current_turn){
	
			for(int i =0; i< num_row; i++){
			
				for(int j = 0; j< num_col; j++){
	
					board[i][j]->set_num_neighbors(i,j);
					}
				} 

			for(int i =0; i< num_row; i++){
				for(int j = 0; j< num_col; j++){
					board[i][j]->update_status;
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



#endif
