#ifndef ConwayCell_h
#define ConwayCell_h

#include <vector>
#include <iostream> 
#include "AbstractCell.h"


class ConwayCell : public AbstractCell {
	
public:
	ConwayCell (char c);

	void set_num_neighbors(int row, int col, vector<vector<char> > board_copy, int board_row, int board_col);

	void update_status();

	

		
};

#endif