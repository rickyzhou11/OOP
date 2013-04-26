#ifndef AbstractCell_h
#define AbstractCell_h
#include <vector>

using namespace std;

class AbstractCell {

private:
	
	  

protected:
	int _num_neighbors;
	char _c;
	bool _alive;
	int age;
	
public: 
	

	AbstractCell();

	AbstractCell(char c);

	virtual ~AbstractCell()
	{}

	virtual char get_char() =0;


	virtual bool is_alive() =0;
	
	virtual void set_alive() =0;

	virtual void increase_age() = 0;
	
	void mutate(); 

	virtual bool need_to_mutate() =0; 
};

#endif 

