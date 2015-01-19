#pragma once

#include <iostream>
#include <utility>

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/directed_graph.hpp>
#include <boost/graph/graphml.hpp>

#include <boost/graph/plod_generator.hpp>
#include <boost/random/linear_congruential.hpp>

#include "NodeProp.h"
#include "LinkProp.h"

class Graph;

typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, NodeProp, LinkProp> graph_t;
typedef boost::graph_traits<graph_t>::vertex_descriptor vertex_descriptor;
typedef boost::graph_traits<graph_t>::edge_descriptor edge_descriptor;


