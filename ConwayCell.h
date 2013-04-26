#ifndef ConwayCell_h
#define ConwayCell_h
#include <vector>
#include <iostream>
#include "AbstractCell.c++"

using namespace std;

class ConwayCell : public AbstractCell {
	
public:
	

	ConwayCell ();

	ConwayCell (char c);

	ConwayCell* clone() const;

	char get_char();
	
	bool is_alive();
	
	void set_alive();	
};	

#endif
