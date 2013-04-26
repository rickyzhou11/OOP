// -------------------------
// projects/life/RunLife.c++
// Copyright (C) 2013
// Glenn P. Downing
// -------------------------

/*
To run the program:
    % make RunLife
    % make run

To configure Doxygen:
    doxygen -g
That creates the file Doxyfile.
Make the following edits:
    EXTRACT_ALL            = YES
    EXTRACT_PRIVATE        = YES
    EXTRACT_STATIC         = YES
    GENERATE_LATEX         = NO

To document the program:
    doxygen Doxyfile
*/

// --------
// includes
// --------

#include <cassert>   // assert
#include <iostream>  // cout, endl
#include <stdexcept> // invalid_argument, out_of_range
#include <fstream>
#include <vector>
#include "AbstractCell.h"
#include "ConwayCell.h"
#include "FredkinCell.h"
#include "Life.h"

// ----
// main
// ----

int main () {
    using namespace std;
    ios_base::sync_with_stdio(false); // turn off synchronization with C I/O

    // ------------------
    // Conway Cell 109x69
    // ------------------

    try {
        cout << "*** Life<ConwayCell> 109x69 ***" << endl;
        /*
        read RunLifeConway.in // assume all Conway cells
        Simulate 283 moves.
        Print the first 10 grids (i.e. 0, 1, 2...9).
        Print the 283rd grid.
        Simulate 40 moves.
        Print the 323rd grid.
        Simulate 2177 moves.
        Print the 2500th grid.
        */


        ifstream r;
        r.open ("RunLifeConway.in");
        int x;
        int y;
        char c;
        vector<char> char_vector;

        vector<vector<char> > vector;
                r >> x >> y;
        
        for (int i = 0; i < x; ++i) {
            vector.push_back(char_vector);
            for (int j = 0; j < y; ++j) {
                r >> c;
                vector[i].push_back(c);
            }
            
        }
        r.close();



    Life<ConwayCell> life(x, y, vector );
    	life.output();

        for(int i = 0; i< 9 ; i++)
            {
                life.play(1);
                life.output();
            }
        for(int i = 0; i < 274; i++){
            life.play(1);
        }
        life.output();
        for(int i = 0; i < 40; i++){
            life.play(1);
        }
        life.output();
        for(int i = 0; i < 2177; i++){
            life.play(1);
        }
        life.output();

	
        }
    catch (const invalid_argument&) {
        assert(false);}
    catch (const out_of_range&) {
        assert(false);}

    // ------------------
    // Fredkin Cell 20x20
    // ------------------

    try {
        cout << "*** Life<FredkinCell> 20x20 ***" << endl;
        
        // read RunLifeFredkin.in // assume all Fredkin cells
        // Simulate 5 moves.
        // Print every grid (i.e. 0, 1, 2...5)

        ifstream r;
        r.open ("RunLifeFredkin.in");
        int x;
        int y;
        char c;
        vector<char> char_vector;

        vector<vector<char> > vector;
                r >> x >> y;
        
        for (int i = 0; i < x; ++i) {
            vector.push_back(char_vector);
            for (int j = 0; j < y; ++j) {
                r >> c;
                vector[i].push_back(c);
            }
            
        }
        r.close();



    Life<FredkinCell> life(x, y, vector );
        life.output();
        for(int i = 0; i< 5 ; i++){
            life.play(1);
            life.output();
    }
    
        
        }
    catch (const invalid_argument&) {
        assert(false);}
    catch (const out_of_range&) {
        assert(false);}

    // ----------
    // Cell 20x20
    // ----------

    try {
        cout << "*** Life<Cell> 20x20 ***" << endl;
        
        // read RunLifeCell.in // assume all Fredkin cells
        // Simulate 5 moves.
        // Print every grid (i.e. 0, 1, 2...5)

        ifstream r;
        r.open ("RunLifeCell.in");
        int x;
        int y;
        char c;
        vector<char> char_vector;

        vector<vector<char> > vector;
                r >> x >> y;
        
        for (int i = 0; i < x; ++i) {
            vector.push_back(char_vector);
            for (int j = 0; j < y; ++j) {
                r >> c;
                vector[i].push_back(c);
            }
            
        }
        r.close();



    Life<Cell> life(x, y, vector );
        life.output();
        for(int i = 0; i< 5 ; i++){
            life.play(1);
            life.output();
    }
    
        
        }
    catch (const invalid_argument&) {
        assert(false);}
    catch (const out_of_range&) {
        assert(false);}

    return 0;}
