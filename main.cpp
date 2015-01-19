#include "Graph.h"
#include <cstdlib>

int main(int argc, char* argv[]) {

	long unsigned int  num_nodes = 10;
	double alpha = 2;
	double beta = 3.1;
	
	if (argc == 4) {
		num_nodes = std::strtoul(argv[1],nullptr,10);
		alpha = std::stod(argv[2],nullptr);
		beta = std::stod(argv[3],nullptr);
	} else {
		printf("usage:   ./test <num nodes> <alpha> <beta>\nexample: ./test 100 2.1 1000\n\n\n");
		exit(1);
	}
	 
	Graph plod{num_nodes, alpha, beta};
	plod.std_out_write();	
}
