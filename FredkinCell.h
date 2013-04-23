#ifndef FredkinCell_h
#define FredkinCell_h

#include<iostream> 


class ConwayCell  : public AbstractCell {
	
	public:
		FredkinCell (char c);

	void update_status() ;

	void set_num_neighbors(int row, int col);

		
};

#endif
