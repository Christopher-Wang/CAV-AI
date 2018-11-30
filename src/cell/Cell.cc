#include "Cell.h"

Cell:Cell (int n, int m) {
	this->weight = new Matrix(n,m);
	this->bias = new Matrix(1, m);
}

Cell::~Cell(){}

void Cell::get_dim() {
	return 0;
}
