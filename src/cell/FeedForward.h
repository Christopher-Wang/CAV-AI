#ifndef FEED_FORWARD_H
#define FEED_FORWARD_H

#include "Cell.h"

class FeedForward : public Cell {
	public:
		FeedForward();
		~FeedForward();
	
	private:
		int	temp;
}

#endif
