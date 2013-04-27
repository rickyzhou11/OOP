#ifndef FredkinCell_h
#define FredkinCell_h
#include <vector>
#include <iostream> 
#include "AbstractCell.h"

class FredkinCell : public AbstractCell {
	
public:
	

	FredkinCell ();

	FredkinCell (char c);

	FredkinCell* clone() const;

	char get_char();
	
	bool is_alive();
	
	void set_alive();

	void increase_age();

	bool need_to_mutate();	
};

#endif
