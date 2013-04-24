#ifndef AbstractCell_h
#define AbstractCell_h

class AbstractCell {

private:
	
	  

protected:
	int _num_neighbors;
	int _age;
	char  _c; 
	bool _alive;
	
public: 
	
	

	AbstractCell(){
		_num_neighbors = 0;
		_age = 0;
	}
	// ------------
    // update_status
    // ------------
/**
* check the number of neighbors and according to what type of
* cell it is (Conway or Fredkin) determine if it needs to change
* its status from dead to alive or vice versa
**/
	virtual void update_status() = 0;  
    // ------------
    // set_num_neighbors
    // ------------
/**
* pass in the location of the cell on the board and the cell determines
* the number of alive neighbors around it
* @param x - the row that it is on
* @param y - the column that it is on
**/
	virtual void set_num_neighbors(int row, int col, vector<vector<char> > board_copy, int board_row, int board_col) = 0; 

 	virtual void mutate() = 0; 
	
	bool alive(){
		return _alive;
	}


};

#endif 

