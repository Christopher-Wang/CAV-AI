#ifndef CELL_H
#define CELL_H

#include "../math/math.h"

class Cell {
	public:
		Cell();
		virtual ~Cell();
	
		void get_dim();
		virtual void step(Matrix a) = 0;
	
		// need to define common fucntion
	
	protected:
		int n; // colums
    	int m; // rows
	
		Matrix weight;
		Matrix bias;
	
		// need to define a matrix and other common vars
    
}

#endif
