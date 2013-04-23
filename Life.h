#ifndef Handle_h
#define Handle_h
#include <iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include <algorithm>

using namespace std;
 

template <typename  T>
 class Life{

	private:

		vector< vector<T> > board; 

		int _gen; 

		int _pop;

	public:

		int _row;

		int _col;	
		
		Life(istream& in);

		void play(int total_turns);

		void output(ostream& out); 

};

template <typename T> 

typedef std::vector< vector<T> > type;

	template <typename T>
	Life<T>::Life(istream& in){

		int num_row;

		int num_col;
		char cell;

		pop = 0;

		gen = 0;

		int >> num_row;

		int >> num_col;
	
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
	void Life<T>::play(int total_turns, int print_num){
 		int current_turn = 0;

		while(total_turns > current_turn){
			if(current_turn % print_num)
					output();
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




	}
#endif
