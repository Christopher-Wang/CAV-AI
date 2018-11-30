#ifndef NUREAL_NETWORK_H
#define NUREAL_NETWORK_H

class NurealNetwork {
	public:
		NurealNetwork();
		~NurealNetwork();
		
		Matrix feed(Matrix);
		void train(Matrix, Matrix);
		void add_layer(Cell);
	
	private:
		LinkedList<Cell> layers;
}

#endif
