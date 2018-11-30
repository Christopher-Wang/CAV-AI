#include "FeedForward.h"

FeedForward:FeedForward (int n, int m) : Cell(n, m) {};
FeedForward::~FeedForward(){};

Matrix FeedForward::step(Matrix a) {
	return (this->weight * a) + this->bias;
};
