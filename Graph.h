#pragma once
#include "boost_graph.h"


class Graph {
	graph_t g;
	boost::minstd_rand gen;
	typedef boost::plod_iterator<boost::minstd_rand, graph_t> SFGen;
	
public:
	Graph(long unsigned int n_Vert, double a, double b) : g{SFGen(gen, n_Vert, a, b), SFGen(), n_Vert} {};

	void std_out_write();
};
