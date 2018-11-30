#ifndef CELL_H
#define CELL_H

class Cell {
	public:
		Cell();
		virtual ~Cell();
	
		void get_dim();
		virtual void step() = 0;
    
    		// need to define common fucntion
	
	protected:
		int n; // colums
    		int m; // rows 
    
    		// need to define a matrix and other common vars
    
}

#endif
