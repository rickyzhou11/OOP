#include <iostream>
#include<string>
#include<vector>
#include<stdexcept>

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
struct board {
	 
	typedef std::vector< vector<T> > type;

	
};



	template <typename T>
	Life<T>::Life(istream& in){

		int num_row;

		int num_col;

		pop = 0;

		gen = 0'

		int >> num_row;

		int >> num_col;
	
		for(int row = 0; row < num_row; row++){

			board.push_back(vector<T>());

			for(int col = 0; col < num_col; col++){

				char cell;
	
				in >> cell; 

				board[row].push_back(T(cell));
			
				if(board[row][col]) pop++;	

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

			
			rungame();
			current_turn++;
			

		}


	}
	 
        //-------------------
        // play
        //------------------

	template <typename T> 
	
