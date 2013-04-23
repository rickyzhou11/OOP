#ifndef ConwayCell_h
#define ConwayCell_h

#include<iostream> 


class ConwayCell : public AbstractCell {
	
public:
	ConwayCell (char c);

	void set_num_neighbors(int row, int col);

	void update_status();

	

		
};

#endif